#if ! defined ( DATA_H )
#define DATA_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include <string>
#include "Measurement.h"
#include "Cleaner.h"
#include "Sensor.h"
#include "IndPriv.h"
#include "Attribute.h"
#include "Provider.h"

//------------------------------------------------------------------------
// Rôle de la classe <Data>
// Exploiter les données des différents fichiers d'informations fournis
//
//------------------------------------------------------------------------

class Data
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    // initialiser les utilisateurs (à partir d'un fichier)
    bool initUsers(string nomFichier);

    // initialiser les Sensors (à partir d'un fichier)
    bool initSensors(string nomFichier);

    // initialiser les Providers (à partir d'un fichier)
    bool initProviders(string nomFichier);

    // initialiser les mesures (à partir d'un fichier)
    bool initMeasurements(string nomFichier);

    // initialiser les cleaners (à partir d'un fichier)
    bool initCleaners(string nomFichier);

    // initialiser les attributes (à partir d'un fichier)
    bool initAttributes(string nomFichier);

    // Méthode qui nous permet de classer les sensors 
    vector<pair<string, int>> rankSensors(string sensorId, Date date, int nbJours);

    // Méthode qui nous permet de calculer l'indice ATMO (en fonction d'une zone) 
    int calculerIndiceAtmo(Coordonnees coord, double rayon, Date date, int nbJour );

    // Méthode qui nous permet de calculer l'indice ATMO (par Sensor)
    int calculerIndiceAtmo(string sensorID, Date date, int nbJour );

    //getter de sensors
    vector<Sensor> getSensors();

    //getter de Measurement
    vector<Measurement> getMeasurements();

    //getter des cleaners
    vector <Cleaner> getCleaners();

    void addSensor(Sensor & s);

    void addMeasurements(Measurement & m);


//-------------------------------------------- Constructeurs - destructeur

    //Constructeur
    Data ( );

    //Destructeur
    ~Data ( );
    

//------------------------------------------------------------------ PROTECTED

protected:
//----------------------------------------------------- Attributs protégés
    vector<Measurement> measurements;
    vector<Sensor> sensors;
    vector<Provider> providers;
    vector<IndPriv> users;
    vector<Cleaner> cleaners;
    vector<Attribute> attributes;

};


#endif 

