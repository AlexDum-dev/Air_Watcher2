//---------- Interface de la classe <Trajet> (fichier VueAgenceGouv.h) ----------------
#ifndef AGENCEGOUV_H
#define AGENCEGOUV_H
using namespace std;

#include "Vue.h"
#include "../Model/Sensor.h"
#include "../Model/Coordonnees.h"
#include "../Model/Date.h"
#include "../Controller/ControllerUser.h"
#include <iostream>

class VueAgenceGouv : public Vue
{

public:
    VueAgenceGouv();

    void afficheIdentifierAirSim();

    void afficheCheckSensor();

    void afficheAjouterCapteur();

    void afficheCheckIndPriv();
    /*
    void afficheCalculerIndiceAtmo(Coordonnees coord, int rayon, Date date, int nbJours);

    void afficheCalculerIndiceAtmo(string sensorID, Date date, int nbJours);

    void afficheRankSensors(string SensorID, Date date, int nbJours);
    */
    void afficheInscription();

    void afficheImpactCleaner();

    void afficheAuthentification();

    void afficheConsultDataZone();

    void afficheMenu();

    void choixMenu(char choix);

    ~VueAgenceGouv();
};

#endif