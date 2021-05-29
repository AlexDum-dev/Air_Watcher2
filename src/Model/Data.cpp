//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
using namespace std;
#include <iostream>
#include <algorithm>
//------------------------------------------------------ Include personnel
#include "Data.h"
#include <vector>
#include <fstream>
#include <string>
#include "Measurement.h"
#include "Cleaner.h"
#include "Sensor.h"
#include "Utilisateur.h"
#include "Provider.h"

//Méthode qui nous permet de trier par le deuxième élément d'une pair
bool sortbysec(const pair<Sensor,int> &a, const pair<Sensor,int> &b)
{
    return (a.second < b.second);
}

//Constructeur
Data::Data ( )
{
#ifdef MAP
    cout << "Appel au constructeur de <Data>" << endl;
#endif
}

//Destructeur
Data::~Data()
{
    
}


//getter du vector de sensors
vector<Sensor> Data::getSensors()
{
    return sensors;
}


//Initialiser les Sensors(à partir d'un fichier)
bool Data::initSensors(string nomFichier)
{
    bool res = true;

    ifstream file (nomFichier);

    if (!file)
    {
       
        return false;
    }
    

    while(!file.eof())
    {
        string id;
        string lat;
        string longi;
        getline(file,id,';');
        getline(file,lat,';');
        getline(file,longi,';');
        
        Coordonnees coord(stof(lat),stof(longi));
        Sensor unSensor(id,coord);
        cout << unSensor.getId() << endl;
        sensors.push_back(unSensor);
        file.get();
    }

    return res;
}

//Initialiser les Cleaners(à partir d'un fichier)
bool Data::initCleaners(string nomFichier)
{
    bool res = true;

    ifstream file (nomFichier);

    if (!file)
    {
        return false;
    }

    while(!file.eof())
    {
        string id;
        string trash;
        string lat;
        string longi;
        string annee, mois, jour;
        getline(file,id,';');
        getline(file,lat,';');
        getline(file,longi,';');
        getline(file,annee,'-');
        getline(file,mois,'-');
        getline(file,jour,'-');
        getline(file,trash,';');
        Date dateStart(stoi(mois),stoi(jour),stoi(annee));
        getline(file,annee,'-');
        getline(file,mois,'-');
        getline(file,jour,'-');
        Date dateStop(stoi(mois),stoi(jour),stoi(annee));
        getline(file,trash,';');

        
        Coordonnees coord(stof(lat),stof(longi));
        Cleaner unCleaner(id,coord,dateStart,dateStop);
        cleaners.push_back(unCleaner);
        file.get();
    }

    return res;
}


//initaliser les Providers (à partir d'un fichier')
bool Data::initProviders(string nomFichier)
{
    bool res = true;

    ifstream file (nomFichier);

    if (!file)
    {
        return false;
    }

    while(!file.eof())
    {
        string id;
        string mdp;
        string adresseMail;
        string idCleaner;
        getline(file,id,';');
        getline(file,mdp,';');
        getline(file,adresseMail,';');
        char stop = 'o';
        Cleaner cleaner;
        vector<Cleaner> c;
        
        while (stop != ';')
        {
            getline(file,idCleaner,',');
            for (unsigned int i = 0; i<(this->cleaners).size(); ++i)
            {
                if (cleaners.at(i).getId() == idCleaner)
                {
                    cleaner = cleaners.at(i);
                    break;
                }
            }

            c.push_back(cleaner);

            //il faut trouver un moyen de lire le caractere sans le consommer 
        } 
        
        Provider unProvider(id,mdp,adresseMail);
        unProvider.SetCleaners(c);
        providers.push_back(unProvider);
        file.get();
    }

    return res;
}


//initialiser un utilisateur (à partir d'un fichier)
bool Data::initUsers(string nomFichier)
{
    bool res;
    ifstream file (nomFichier);
    while(!file.eof())
    {

    }

    return res;
}


//initialiser les mesures des sensors ( à partir d'un fichier)
bool Data::initMeasurements(string nomFichier) // A FAIRE !!!
{
    bool res;
    return res;
}


// initialiser Attributes (à partir d'un fichier)
bool Data::initAttributes(string nomFichier)
{
    bool res;
    return res;
}

/*
// Méthode qui nous permet de classer les sensors 
vector <pair<Sensor, int>> Data::rankSensors(Sensor *sensor, Data data, Date timestamp, int nbJours)
{
    vector <pair <Sensor, int>> ranking;
    ranking.push_back(make_pair(*sensor, 0));

    for (auto i = data.getSensors().begin(); i!= data.getSensors().end(); ++i){
        auto p = make_pair(*i, abs(calculerIndiceAtmo(*sensor, data, timestamp, nbJours)-calculerIndiceAtmo(*i, data, timestamp, nbJours)));
        ranking.push_back(p);
    }
    sort(ranking.begin(), ranking.end(), sortbysec);

    return ranking;
}

int Data:: calculerIndiceAtmo(Coordonnees coord, int rayon, Data data, Date date, int nbJour )
{
    int result=0;
    //Parcourir tous les sensors
    //Calculer leur distance par rapport coord et si < rayon alors on les garde
    //pour chaque capteur on appelle calculerIndiceAtmo() et on fait la moyenne
    vector<Sensor> listSensors = data.getSensors();
    int compteur = 0;
    double sommeIndice = 0;
    for(Sensor s : listSensors)
    {
        int distance = sqrt(pow((s.getCoordonnees().GetLatitude() - coord.GetLatitude()),2) - pow((s.getCoordonnees().GetLongitude() - coord.GetLongitude()), 2));
        if(distance <= rayon)
        {
            sommeIndice += calculerIndiceAtmo(s, data, date, nbJour);
            compteur++;
        }
    }

    return ( (double) sommeIndice/compteur);

}
*/

int Data::calculerIndiceAtmo(Sensor sensor, Date date, int nbJour )
{
    int result=0;
    vector<Measurement> sensorMeas;
    int tmp=0;
    double moyO3=0;
    double moyNO2=0;
    double moySO2=0;
    double moyPM10=0;
     

    for(auto i = measurements.begin(); i!= measurements.end(); ++i){
        Date dtmp = date;
        dtmp += nbJour;
        if((*i).getSensorId() == sensor.getId() && (*i).getDate() > date && (*i).getDate()<=dtmp ){
            sensorMeas.push_back(*i);
        }
    }

    for(auto i = measurements.begin(); i!= measurements.end(); ++i){
        if(tmp%4==0){
            moyO3+=(*i).getValue();
        } else if(tmp%4==1){
            moyNO2+=(*i).getValue();
        } else if(tmp%4==2){
            moySO2+=(*i).getValue();
        }else if(tmp%4==3){
            moyPM10+=(*i).getValue();
        }
        tmp++;
    }

    moyO3= moyO3/(tmp/4);
    moyNO2= moyNO2/(tmp/4);
    moySO2= moySO2/(tmp/4);
    moyPM10= moyPM10/(tmp/4);

    vector<int> moy;

    moy.push_back(moyO3);
    moy.push_back(moyNO2);
    moy.push_back(moySO2);
    moy.push_back(moyPM10);

    sort(moy.begin(), moy.end());

    if(moy[0]==moyO3){
        if(moyO3<=29){
            result=1;
        }else if(moyO3<=54){
            result=2;
        }else if(moyO3<=79){
            result=3;
        }else if(moyO3<=104){
            result=4;
        }else if(moyO3<=129){
            result=5;
        }else if(moyO3<=149){
            result=6;
        }else if(moyO3<=179){
            result=7;
        }else if(moyO3<=209){
            result=8;
        }else if(moyO3<=239){
            result=9;
        }else {
            result=10;
        }
    }else if (moy[0]==moyNO2){
        if(moyNO2<=29){
            result=1;
        }else if(moyNO2<=54){
            result=2;
        }else if(moyNO2<=84){
            result=3;
        }else if(moyNO2<=109){
            result=4;
        }else if(moyNO2<=134){
            result=5;
        }else if(moyNO2<=164){
            result=6;
        }else if(moyNO2<=199){
            result=7;
        }else if(moyNO2<=274){
            result=8;
        }else if(moyNO2<=399){
            result=9;
        }else {
            result=10;
        }
    }else if (moy[0]==moySO2){
        if(moySO2<=39){
            result=1;
        }else if(moySO2<=79){
            result=2;
        }else if(moySO2<=119){
            result=3;
        }else if(moySO2<=159){
            result=4;
        }else if(moySO2<=199){
            result=5;
        }else if(moySO2<=249){
            result=6;
        }else if(moySO2<=299){
            result=7;
        }else if(moySO2<=399){
            result=8;
        }else if(moySO2<=499){
            result=9;
        }else {
            result=10;
        }
    }else if (moy[0]==moyPM10){
        if(moyPM10<=6){
            result=1;
        }else if(moyPM10<=13){
            result=2;
        }else if(moyPM10<=20){
            result=3;
        }else if(moyPM10<=27){
            result=4;
        }else if(moyPM10<=34){
            result=5;
        }else if(moyPM10<=41){
            result=6;
        }else if(moyPM10<=49){
            result=7;
        }else if(moyPM10<=64){
            result=8;
        }else if(moyPM10<=79){
            result=9;
        }else {
            result=10;
        }

        return result;

}