#include "VueIndPriv.h"

//Constructeur
VueIndPriv::VueIndPriv()
{
}

//Méthode qui affiche les données relatives à l'inscription
void VueIndPriv::afficheInscription()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

//Méthode qui affiche les données relatives à l'impact des cleaners
void VueIndPriv::afficheImpactCleaner()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

//Méthode qui affiche les données relatives à l'authentification
void VueIndPriv::afficheAuthentification()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

//Méthode qui affiche les données par zone
void VueIndPriv::afficheConsultDataZone()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}
//Méthode qui affiche les données  relative à l'insatllation d'un sensor
void VueIndPriv::afficheInstallSensor()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

//Méthode qui affiche le menu
void VueIndPriv::afficheMenu()
{

    char choix;

    do
    {
        cout << "Bienvenue dans l'espace Individu Privé" << endl;

        cout << "a- Inscription" << endl;
        cout << "b- Connexion" << endl;
        cout << "c- Calculer l'impact des Cleaners sur l'air" << endl;
        cout << "d- Consulter la Data pour une zone spécifique" << endl;
        cout << "e- Installer un Sensor" << endl;
        cout << "f- Quitter la vue Individu Privé"<<endl;

        cin >> choix;
        choixMenu(choix);
    } while (choix != 'f');
}

//Méthode pour le choix d'une option dans un menu
void VueIndPriv::choixMenu(char choix)
{

    switch (choix)
    {
    case 'a':
        cout<<"*******************************************************************************************************************"<< endl;
        afficheInscription();
        cout<<"*******************************************************************************************************************"<< endl;
        break;
    case 'b':
        cout<<"*******************************************************************************************************************"<< endl;
        afficheAuthentification();
        cout<<"*******************************************************************************************************************"<< endl;
        break;
    case 'c':
        cout<<"*******************************************************************************************************************"<< endl;
        afficheImpactCleaner();
        cout<<"*******************************************************************************************************************"<< endl;
        break;
    case 'd':
        cout<<"*******************************************************************************************************************"<< endl;
        afficheConsultDataZone();
        cout<<"*******************************************************************************************************************"<< endl;
        break;
    
    case 'e':
        cout<<"*******************************************************************************************************************"<< endl;
        afficheInstallSensor();
        cout<<"*******************************************************************************************************************"<< endl;
        break;
    case 'f':
        break;
    }
}


//Destructeur
VueIndPriv::~VueIndPriv()
{
}