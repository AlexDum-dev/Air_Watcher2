//---------- Interface de la classe <Trajet> (fichier VueAgenceGouv.h) ----------------
#ifndef VUEINDPRIV_H
#define VUEINDPRIV_H
using namespace std;

#include "Vue.h"
#include "../Model/Sensor.h"
#include "../Model/Coordonnees.h"
#include "../Model/Date.h"
#include "../Controller/ControllerUser.h"
#include <iostream>

class VueIndPriv : public Vue
{
public:
    VueIndPriv();
    void afficheInscription();
  

    void afficheImpactCleaner();
    

    void afficheAuthentification();
    
    void afficheConsultDataZone();
    

    void afficheInstallSensor();
    

    void afficheMenu();
   

    void choixMenu(char choix);
    

~VueIndPriv();
};

#endif
