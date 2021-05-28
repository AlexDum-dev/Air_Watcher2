#include "VueProvider.h"


VueProvider:: VueProvider ()
{

}

void VueProvider:: afficheInscription()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueProvider:: afficheImpactCleaner()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueProvider:: afficheAuthentification()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueProvider:: afficheConsultDataZone()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueProvider:: afficheMenu(){

    char choix;
    
    do{
    cout<<"Bienvenue dans l'espace Provider"<<endl;

    cout<< "a- Inscription"<<endl;
    cout<< "b- Connexion"<<endl;
    cout<< "c- Calculer l'impact des Cleaners sur l'air"<<endl;
    cout<< "d- Consulter la Data pour une zone spécifique"<<endl;

    cin >> choix;
    choixMenu(choix);
    }
    while(choix!='l');
    

}

void VueProvider:: choixMenu(char choix){

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
        break;
    
    }
}

VueProvider::~VueProvider ()
{

}