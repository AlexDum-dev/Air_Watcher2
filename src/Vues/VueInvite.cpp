#include "VueInvite.h"

//Constructeur
VueInvite:: VueInvite ()
{
}

//Méthode qui affiche les données relatives à l'inscription
void VueInvite:: afficheInscription()
{
    cout<<"Vous êtes dans la vue Invité, vous ne pouvez pas vous inscrire"<<endl;
}

//Méthode qui affiche les données relatives à l'impact des cleaners
void VueInvite:: afficheImpactCleaner()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche les données relatives à l'authentification
void VueInvite:: afficheAuthentification()
{
    cout<<"Vous êtes un invité! Vous n'avez pas besoin de vous connecter"<<endl;
}

//Méthode qui affiche les données par zone
void VueInvite:: afficheConsultDataZone()
{
    cout<<"Fonctionnalité non disponible pour le moment"<<endl;
}

//Méthode qui affiche le menu
void VueInvite:: afficheMenu(){

    char choix;
    
    do{
    cout<<"Bienvenue dans l'espace Invite"<<endl;

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
void VueInvite:: choixMenu(char choix){

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
VueInvite::~VueInvite ()
{
}
