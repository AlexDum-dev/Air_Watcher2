#ifndef VUEPROVIDER_H
#define VUEPROVIDER_H
using namespace std;


//--------------------------------------------------- Include utilisés
#include "Vue.h"
#include "../Model/Sensor.h"
#include "../Model/Coordonnees.h"
#include "../Model/Date.h"
#include "../Controller/ControllerUser.h"
#include <iostream>


//------------------------------------------------------------------------
// Rôle de la classe <VueProvider>
// La vue du Provider
//
//------------------------------------------------------------------------

class VueProvider : public Vue
{

//----------------------------------------------------------------- PUBLIC

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
    
        //Méthode qui affiche le menu
        void afficheMenu();
    
        //Méthode pour le choix d'une option dans un menu
        void choixMenu(char choix);

    //-------------------------------------------- Constructeurs - destructeur
        //Constructeur
        VueProvider();
        
        //Destructeur
        virtual ~VueProvider();
};

#endif
