#ifndef VUEINDPRIV_H
#define VUEINDPRIV_H
using namespace std;

#include "Vue.h"
#include "../Model/Sensor.h"
#include "../Model/Coordonnees.h"
#include "../Model/Date.h"
#include "../Controller/ControllerUser.h"
#include <iostream>

//------------------------------------------------------------------------
// Rôle de la classe <VueIndPriv>
// La vue de l'individu privé
//
//------------------------------------------------------------------------

class VueIndPriv : public Vue
{

public:

    //-------------------------------------------- Méthode publique

        //Méthode qui affiche les données relatives à l'inscription
        void afficheInscription();
    
        //Méthode qui affiche les données relatives à l'impact des Cleaners
        void afficheImpactCleaner();
        
        //Méthode qui affiche les données relatives à l'authentification
        void afficheAuthentification();

        //Méthode qui affiche les données par zone        
        void afficheConsultDataZone();
        
        //Méthode qui affiche les données relatives à l'installation sensor 
        void afficheInstallSensor();
        
        //Méthode qui affiche le menu
        void afficheMenu();
    
        //Méthode pour le choix d'une option dans un menu
        void choixMenu(char choix);

        //Constructeur
        VueIndPriv();
        
        //Destructeur
        virtual ~VueIndPriv();
};

#endif
