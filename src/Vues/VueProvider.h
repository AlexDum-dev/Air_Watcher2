//---------- Interface de la classe <Trajet> (fichier VueAgenceGouv.h) ----------------
#ifndef VUEPROVIDER_H
#define VUEPROVIDER_H
using namespace std;

#include "Vue.h"
#include "../Model/Sensor.h"
#include "../Model/Coordonnees.h"
#include "../Model/Date.h"
#include "../Controller/ControllerUser.h"
#include <iostream>

class VueProvider : public Vue
{
public:
    VueProvider();

    void afficheInscription();
    

    void afficheImpactCleaner();
    

    void afficheAuthentification();
    

    void afficheConsultDataZone();
   
    void afficheMenu();
   

    void choixMenu(char choix);
    
    ~VueProvider();
};

#endif
