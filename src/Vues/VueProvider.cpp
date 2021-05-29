//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include "VueProvider.h"

//Constructeur
VueProvider:: VueProvider ()
{
}

//Méthode qui affiche les données relatives à l'inscription
void VueProvider:: afficheInscription()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'impact des cleaners
void VueProvider:: afficheImpactCleaner()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'authentification
void VueProvider:: afficheAuthentification()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données par zone
void VueProvider:: afficheConsultDataZone()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche le menu
void VueProvider:: afficheMenu(){

    char choix;
    
    do{
    cout<<"Bienvenue dans l'espace Provider"<<endl;

    cout<< "a- Inscription"<<endl;
    cout<< "b- Connexion"<<endl;
    cout<< "c- Calculer l'impact des Cleaners sur l'air"<<endl;
    cout<< "d- Consulter la Data pour une zone spécifique"<<endl;
    cout<< "e- Quitter la vue Individu Privé"<<endl;

    cin >> choix;
    choixMenu(choix);
    }
    while(choix!='e');
    

}

//Méthode pour le choix d'une option dans un menu
void VueProvider:: choixMenu(char choix){

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
        break;
    
    }
}

//Destructeur
VueProvider::~VueProvider ()
{

}