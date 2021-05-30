#ifndef VUEAGENCEGOUV_H
#define VUEAGENCEGOUV_H
using namespace std;


//--------------------------------------------------- Include utilisés
#include "Vue.h"
#include "../Model/Sensor.h"
#include "../Model/Coordonnees.h"
#include "../Model/Date.h"
#include "../Controller/ControllerUser.h"
#include <iostream>

//------------------------------------------------------------------------
// Rôle de la classe <VueAgenceGouv>
// La vue de l'agence gouvernementale
//
//------------------------------------------------------------------------

class VueAgenceGouv : public Vue
{

//----------------------------------------------------------------- PUBLIC

public:

    //-------------------------------------------- Méthode publique

    //Méthode qui affiche les zones avec des airs similaires
    void afficheIdentifierAirSim();

    //Méthode qui affiche les données relatives à l'etat d'un sensor
    void afficheCheckSensor();

    //Méthode qui affiche les données relatives à l'ajout d'un capteur
    void afficheAjouterCapteur();

    //Méthode qui affiche les données relatives à l'etat d'un ind privé
    void afficheCheckIndPriv();

    
    //Méthode qui affiche les données relatives à l'indice ATMO par zone
    void afficheCalculerIndiceAtmo(Coordonnees coord, double rayon, Date date, int nbJours);

    //Méthode qui affiche les données relatives à l'indice ATMO par sensor
    void afficheCalculerIndiceAtmo(string sensorID, Date date, int nbJours);

    //Méthode qui affiche les données relatives au classement des sensors
    void afficheRankSensors(string SensorID, Date date, int nbJours);
    

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
    VueAgenceGouv();

    //Destructeur
    virtual ~VueAgenceGouv();    
};

#endif