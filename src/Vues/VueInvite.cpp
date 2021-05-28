#include "VueInvite.h"


VueInvite:: VueInvite ()
{

}

void VueInvite:: afficheInscription()
{
    cout<<"Vous êtes dans la vue Invité, vous ne pouvez pas vous inscrire"<<endl;
}

void VueInvite:: afficheImpactCleaner()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueInvite:: afficheAuthentification()
{
    cout<<"Vous êtes un invité! Vous n'avez pas besoin de vous connecter"<<endl;
}

void VueInvite:: afficheConsultDataZone()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

void VueInvite:: afficheMenu(){

    char choix;
    
    do{
    cout<<"Bienvenue dans l'espace Invite"<<endl;

    cout<< "a- Inscription"<<endl;
    cout<< "b- Connexion"<<endl;
    cout<< "c- Calculer l'impact des Cleaners sur l'air"<<endl;
    cout<< "d- Consulter la Data pour une zone spécifique"<<endl;

    cin >> choix;
    choixMenu(choix);
    }
    while(choix!='l');
    

}

void VueInvite:: choixMenu(char choix){

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

VueInvite::~VueInvite ()
{

}