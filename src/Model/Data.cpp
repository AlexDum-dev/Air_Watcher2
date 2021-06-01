using namespace std;
#include <iostream>
#include <algorithm>

#include "Data.h"
#include <vector>
#include <fstream>
#include <string>
#include "Measurement.h"
#include "Cleaner.h"
#include "Sensor.h"
#include "Utilisateur.h"
#include "Provider.h"
#include <cmath>

//Méthode qui nous permet de trier par le deuxième élément d'une pair
bool sortbysec(const pair<string,int> &a, const pair<string,int> &b)
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

vector<Measurement> Data::getMeasurements()
{
    return measurements;
}

vector <Cleaner> Data:: getCleaners(){
    return cleaners;
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
        sensors.push_back(unSensor);
        file.get();
    }

    return res;
}

void Data::addSensor(Sensor & s)
{
    sensors.push_back(s);
}

void Data::addMeasurements(Measurement & m)
{
    measurements.push_back(m);
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
        getline(file,jour,' ');
        getline(file,trash,';');
        Date dateStart(stoi(mois),stoi(jour),stoi(annee));
        getline(file,annee,'-');
        getline(file,mois,'-');
        getline(file,jour,' ');
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
    bool res =true;
    ifstream file (nomFichier);
    while(!file.eof())
    {

    }

    return res;
}


//initialiser les mesures des sensors ( à partir d'un fichier)
bool Data::initMeasurements(string nomFichier) // Fonctionne !!
{
    bool res = true;

    ifstream file (nomFichier);

    if (!file)
    {
        return false;
    }

    while(!file.eof())
    {
        string sensorId;
        string trash;
        string attributeId,value;
        string annee, mois, jour;

        

        getline(file,annee,'-');
        getline(file,mois,'-');
        getline(file,jour,' ');
        getline(file,trash,';');

        getline(file,sensorId,';');
        getline(file,attributeId,';');
        getline(file,value,';');
        
        Date date(stoi(mois),stoi(jour),stoi(annee));

        Measurement unMeasurement(sensorId,date,stod(value),attributeId);

        measurements.push_back(unMeasurement);
        file.get();
    }

    return res;
}


// initialiser Attributes (à partir d'un fichier)
bool Data::initAttributes(string nomFichier)
{
    bool res= true;
    return res;
}


// Méthode qui nous permet de classer les sensors 
vector <pair<string, int>> Data::rankSensors(string sensorId,Date timestamp, int nbJours)
/*Algorithme: 
    * :parcourir tout les capteur et créer un pair de l'id avec une valeur int : différence entre indice atmo de référence et indice atmo
    *   du capteur actuel.
    * trier la liste selon cette valeur
*/
{
    vector <pair <string, int>> ranking;
    int indiceAtmoReference = calculerIndiceAtmo(sensorId, timestamp, nbJours);
    for (auto i = sensors.begin(); i!= sensors.end(); ++i){
        auto p = make_pair((*i).getId(), abs(indiceAtmoReference-calculerIndiceAtmo((*i).getId(), timestamp, nbJours)));
        ranking.push_back(p);
    }
    sort(ranking.begin(), ranking.end(), sortbysec);

    return ranking;
}


int Data::calculerIndiceAtmo(Coordonnees coord, double rayon, Date date, int nbJour )
/* Algorithme : 
    *Parcourir tous les sensors et ajouter dans une liste ceux qui sont dans la zone définie par les coordonnées et un rayon
    * pour chaque sensor de cette liste calculer la moyenne de l'indice atmo
    * retourn -1 si pas de capteur dans la zone
*/ 
{
    vector<Sensor> listSensors = sensors;
    int compteur = 0;
    int sommeIndice = 0;
    for(Sensor s : listSensors)
    {
        double distance = sqrt(pow((s.getCoordonnees().GetLatitude() - coord.GetLatitude()),2) + pow((s.getCoordonnees().GetLongitude() - coord.GetLongitude()), 2));
        if(distance <= rayon)
        {
            sommeIndice += calculerIndiceAtmo(s.getId(), date, nbJour);
            compteur++;
        }
    }

    if(compteur == 0)
    {
        return -1;
    }

    int moyIndice = (int) floor(1+(sommeIndice/compteur));
    return moyIndice;

}

int Data::calculerIndiceAtmo(string sensorID, Date date, int nbJour )
/* Algorithme : 
    * parcourir toutes les mesures des sensors
    * si l'id correspond à celui passé en paramètre et que la période définie par une date et un nombre de cours correspond
    * alors on ajoute cette mesure à la liste des mesures
    * calculer la moyenne des valeurs puis déterminer l'indice atmo : voir wikipedia/indiceAtmo
    * renvoie -1 si pas de mesures connues
*/ 
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
        if((*i).getSensorId() == sensorID && (*i).getDate() >= date && (*i).getDate()<=dtmp){
            sensorMeas.push_back(*i);
        }
    }

    if(sensorMeas.size() == 0)
    {
        return -1;
    }

    for(auto i = sensorMeas.begin(); i!= sensorMeas.end(); ++i){
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

    moyO3= 4*moyO3/(tmp);
    moyNO2= 4*moyNO2/(tmp);
    moySO2= 4*moySO2/(tmp);
    moyPM10= 4*moyPM10/(tmp);
    vector<double> moy;

    moy.push_back(moyO3);
    moy.push_back(moyNO2);
    moy.push_back(moySO2);
    moy.push_back(moyPM10);

    double max = *max_element(moy.begin(), moy.end());

    if(max==moyO3){
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
    }else if (max==moyNO2){
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
    }else if (max==moySO2){
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
    }else if (max==moyPM10){
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
    }
    
    return result;

}