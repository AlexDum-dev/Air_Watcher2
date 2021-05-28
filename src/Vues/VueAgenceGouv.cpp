#include "VueAgenceGouv.h"

VueAgenceGouv:: VueAgenceGouv ()
{

}

void VueAgenceGouv::afficheInscription()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueAgenceGouv::afficheImpactCleaner()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueAgenceGouv::afficheAuthentification()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueAgenceGouv::afficheConsultDataZone()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueAgenceGouv::afficheIdentifierAirSim()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueAgenceGouv::afficheCheckSensor()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueAgenceGouv::afficheAjouterCapteur()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueAgenceGouv::afficheCheckIndPriv()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}
/*
void VueAgenceGouv::afficheCalculerIndiceAtmo(Coordonnees coord, int rayon, Date date, int nbJours)
{
    int indiceAtmo =controller.actionMenuCalculerIndiceAtmo(coord, rayon, date, nbJours);
    cout<<"La moyenne de l'indice ATMO dans la zone selectionnée est la suivante :"<< indiceAtmo<<endl;
}

void VueAgenceGouv::afficheCalculerIndiceAtmo(string sensorID, Date date, int nbJours)
{
    int indiceAtmo =controller.actionMenuCalculerIndiceAtmo(sensorID, date, nbJours);
    cout<<"La valeur de l'indice ATMO du sensor selectionné est la suivante :"<< indiceAtmo<<endl;
}

void VueAgenceGouv::afficheRankSensors(string SensorID, Date date, int nbJours)
{
    vector<pair<Sensor,int>> rankSensor=controller.actionMenuRankSensors(SensorID, date,nbJours);
    int cmp=1;

    for(pair<Sensor, int> ps:rankSensor){

        cout<<"Rank "<<cmp<<" :"<<ps.first.getId()<<endl;
    }
}
*/
void VueAgenceGouv::choixMenu(char choix){

    switch (choix)
    {
    case 'a':
        {
            afficheInscription();
            break; 
        }

    case 'b':
        {
            afficheAuthentification();
            break; 
        }

    case 'c':
        {
            afficheImpactCleaner();
            break; 
        }

    case 'd':
        {
            afficheConsultDataZone();
            break; 
        }
    case 'e':
        {
            float longitude,latitude;
            int rayon;
            cout<<"entrez la longitude"<<endl;
            cin>>longitude;

            cout<<"entrez la latitude"<<endl;
            cin>>latitude;

            Coordonnees * coord = new Coordonnees(latitude, longitude);
            //Coordonnees coord = new Coordonnees(latitude,longitude);

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

            //afficheCalculerIndiceAtmo(*coord,rayon,*date,nbJour);
            break; 
        }
        case 'f':
        {
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

            //afficheCalculerIndiceAtmo(sensorID,*date,nbJour);
            break; 
        }

        case 'g':
        {
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

            //afficheRankSensors(sensorID,*date,nbJour);
            break; 
        }
        case 'h':
        {
            afficheIdentifierAirSim();
            break;
        }

        case 'i':
        {
            afficheCheckSensor();
            break;
        }

        case 'j':
        {
            afficheAjouterCapteur();
            break;
        }

        case 'k':
        {
            afficheCheckIndPriv();
            break;
        }
       
        break;
    
    }
}

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
    choixMenu(choix);
    }while(choix!='l');
    

}


VueAgenceGouv:: ~VueAgenceGouv()
{

}

