//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include personnel
#include "VueAgenceGouv.h"

#include <chrono>
using namespace std;

//Constructeur
VueAgenceGouv:: VueAgenceGouv ()
{

}

//Méthode qui affiche les données relatives à l'inscription
void VueAgenceGouv::afficheInscription()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'impact des cleaners
void VueAgenceGouv::afficheImpactCleaner()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'authentification
void VueAgenceGouv::afficheAuthentification()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données par zone
void VueAgenceGouv::afficheConsultDataZone()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les zones avec des qualités d'air similaires
void VueAgenceGouv::afficheIdentifierAirSim()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'état d'un sensor
void VueAgenceGouv::afficheCheckSensor()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'ajout d'un capteur
void VueAgenceGouv::afficheAjouterCapteur()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'etat de validité d'un individu privé
void VueAgenceGouv::afficheCheckIndPriv()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'indice ATMO par zone
void VueAgenceGouv::afficheCalculerIndiceAtmo(Coordonnees coord, double rayon, Date date, int nbJours)
{
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();

    int indiceAtmo = controller.actionMenuCalculerIndiceAtmo(coord, rayon, date, nbJours);

    end = std::chrono::system_clock::now();
    int elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end-start).count();
    int elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();

    cout<<"La moyenne de l'indice ATMO dans la zone selectionnée est la suivante :"<< indiceAtmo<<endl;

    cout << "Réponse donnée en : "<< elapsed_seconds << "," << elapsed_milliseconds << "s"<< endl;
}

//Méthode qui affiche les données relatives à l'indice ATMO par sensor
void VueAgenceGouv::afficheCalculerIndiceAtmo(string sensorID, Date date, int nbJours)
{
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();

    int indiceAtmo =controller.actionMenuCalculerIndiceAtmo(sensorID, date, nbJours);

    end = std::chrono::system_clock::now();
    int elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end-start).count();
    int elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();

    cout<<"La valeur de l'indice ATMO du sensor selectionné est la suivante :"<< indiceAtmo<<endl;

    cout << "Réponse donnée en : "<< elapsed_seconds << "," << elapsed_milliseconds << "s"<< endl;

}

//Méthode qui affiche les données relatives au classement des sensors en terme de similitude à un autre sensor
void VueAgenceGouv::afficheRankSensors(string SensorID, Date date, int nbJours)
{
    std::chrono::time_point<std::chrono::system_clock> start, end;
    start = std::chrono::system_clock::now();
    
    vector<pair<string,int>> rankSensor=controller.actionMenuRankSensors(SensorID, date,nbJours);

    end = std::chrono::system_clock::now();
    int elapsed_seconds = std::chrono::duration_cast<std::chrono::seconds>(end-start).count();
    int elapsed_milliseconds = std::chrono::duration_cast<std::chrono::milliseconds>(end-start).count();

    int cmp=1;
    for(pair<string, int> ps:rankSensor){
        cout<<"Rank "<<cmp<<" :"<<ps.first<<endl;
        cmp++;
    }
    

    cout << "Réponse donnée en : "<< elapsed_seconds << "," << elapsed_milliseconds << "s"<< endl;
}

//Méthode pour le choix d'une option dans un menu
void VueAgenceGouv::choixMenu(char choix){

    switch (choix)
    {
    case 'a':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheInscription();
            cout<<"*******************************************************************************************************************"<< endl;
            break; 
        }

    case 'b':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheAuthentification();
            cout<<"*******************************************************************************************************************"<< endl;
            break; 
        }

    case 'c':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheImpactCleaner();
            cout<<"*******************************************************************************************************************"<< endl;
            break; 
        }

    case 'd':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheConsultDataZone();
            cout<<"*******************************************************************************************************************"<< endl;
            break; 
        }
    case 'e':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            float longitude,latitude;
            double rayon;
           
            cout<<"entrez la latitude"<<endl;
            cin>>latitude;

            cout<<"entrez la longitude"<<endl;
            cin>>longitude;

            Coordonnees * coord = new Coordonnees(latitude, longitude);

            cout<<"entrez le rayon"<<endl;
            cin>>rayon;


            int jour,mois,annee;
            cout<<"Vous allez maintenant entrer la date de la manière qui suit (appuyez sur entrer entre chaque étape): le jour, le mois, l'année: "<<endl;
            cin>>jour;
            cin>>mois;
            cin>>annee;
            Date * date = new Date(jour, mois,annee);

            cout<<"entrez le nombre de jours sur lesquels vous voulez calculer cette moyenne"<<endl;
            int nbJour;
            cin>> nbJour;

            afficheCalculerIndiceAtmo(*coord,rayon,*date,nbJour);
            cout<<"*******************************************************************************************************************"<< endl;
            break; 
        }
        case 'f':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            cout<<"Entrez un sensorID"<<endl;
            string sensorID;
            cin>>sensorID;
            
            int jour,mois,annee;
            cout<<"Vous allez maintenant entrer la date de la manière qui suit (appuyez sur entrer entre chaque étape): le jour, le mois, l'année: "<<endl;
            cin>>jour;
            cin>>mois;
            cin>>annee;
            Date * date = new Date(jour, mois,annee);

            cout<<"entrez le nombre de jours sur lesquels vous voulez calculer cette moyenne"<<endl;
            int nbJour;
            cin>> nbJour;

            afficheCalculerIndiceAtmo(sensorID,*date,nbJour);
            cout<<"*******************************************************************************************************************"<< endl;
            break; 
        }

        case 'g':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            cout<<"Entrez un sensorID"<<endl;
            string sensorID;
            cin>>sensorID;
    
            
            int jour,mois,annee;
            cout<<"Vous allez maintenant entrer la date de la manière qui suit (appuyez sur entrer entre chaque étape): le jour, le mois, l'année: "<<endl;
            cin>>jour;
            cin>>mois;
            cin>>annee;
            Date * date = new Date(jour, mois,annee);
            cout<<"entrez le nombre de jours sur lesquels vous voulez calculer ce classement"<<endl;
            int nbJour;
            cin>> nbJour;

            afficheRankSensors(sensorID,*date,nbJour);
            cout<<"*******************************************************************************************************************"<< endl;
            break; 
        }
        case 'h':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheIdentifierAirSim();
            cout<<"*******************************************************************************************************************"<< endl;
            break;
        }

        case 'i':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheCheckSensor();
            cout<<"*******************************************************************************************************************"<< endl;
            break;
        }

        case 'j':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheAjouterCapteur();
            cout<<"*******************************************************************************************************************"<< endl;
            break;
        }

        case 'k':
        {
            cout<<"*******************************************************************************************************************"<< endl;
            afficheCheckIndPriv();
            cout<<"*******************************************************************************************************************"<< endl;
            break;
        }
       
        break;
    
    }
}

//Méthode qui affiche le menu
void VueAgenceGouv::afficheMenu(){

    char choix;
    
    do{
    cout<<"Bienvenue dans l'espace Agence Gouvernementale"<<endl;

    cout<< "a- Inscription"<<endl;
    cout<< "b- Connexion"<<endl;
    cout<< "c- Calculer l'impact des Cleaners sur l'air"<<endl;
    cout<< "d- Consulter la Data pour une zone spécifique"<<endl;
    cout<< "e- Calculer l'Indice Atmo dans une Zone donnée"<<endl;
    cout<< "f- Calculer l'Indice Atmo pour un sensor"<<endl;
    cout<< "g- classer les sensors par ordre de Similarité avec un Sensor"<<endl;
    cout<< "h- Identifier les zones avec une qualité d'air similaire à une zone entrée en paramètres"<<endl;
    cout<< "i- Verfier l'état de marche d'un Sensor"<<endl;
    cout<< "j- Ajouter un Capteur à la base de donnée des capteurs"<<endl;
    cout<< "k- Verifier la fiabilité d'un individu privé"<<endl;
    cout<< "l- Quitter la vue Agence Gouvernementale"<<endl;

    cin >> choix;
    
    //choixMenu(choix);
    }while(choix!='l');
    

}

//destructeur
VueAgenceGouv:: ~VueAgenceGouv()
{

}

