#include "VueIndPriv.h"

VueIndPriv::VueIndPriv()
{
}

void VueIndPriv::afficheInscription()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

void VueIndPriv::afficheImpactCleaner()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

void VueIndPriv::afficheAuthentification()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

void VueIndPriv::afficheConsultDataZone()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

void VueIndPriv::afficheInstallSensor()
{
    cout << "Fonctionnalité non disponible pour le moment" << endl;
}

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

        cin >> choix;
        choixMenu(choix);
    } while (choix != 'l');
}

void VueIndPriv::choixMenu(char choix)
{

    switch (choix)
    {
    case 'a':
        afficheInscription();
        break;
    case 'b':
        afficheAuthentification();
        break;
    case 'c':
        afficheImpactCleaner();
        break;
    case 'd':
        afficheConsultDataZone();
        break;
    
    case 'e':
        afficheInstallSensor();
        break;
    
    default:
        break;
    }
}

VueIndPriv::~VueIndPriv()
{
}