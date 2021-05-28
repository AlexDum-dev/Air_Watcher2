//---------- Interface de la classe <Trajet> (fichier VueAgenceGouv.h) ----------------
#ifndef VUEINVITE_H
#define VUEINVITE_H
using namespace std;

#include "Vue.h"
#include "../Model/Sensor.h"
#include "../Model/Coordonnees.h"
#include "../Model/Date.h"
#include "../Controller/ControllerUser.h"
#include <iostream>

class VueInvite : public Vue
{
public:
    VueInvite();

    void afficheInscription();

    void afficheImpactCleaner();
    

    void afficheAuthentification();
   

    void afficheConsultDataZone();
    

    void afficheMenu();
    

    void choixMenu(char choix);
   
    ~VueInvite();
};

#endif
