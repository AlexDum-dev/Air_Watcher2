/*************************************************************************
                           Data  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Data> (fichier Data.h) ----------------
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

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Data>
//
//
//------------------------------------------------------------------------

class Data
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    bool initUsers(string nomFichier);
    bool initSensors(string nomFichier);
    bool initProviders(string nomFichier);
    bool initMeasurements(string nomFichier);
    bool initCleaners(string nomFichier);
    bool initAttributes(string nomFichier);

    vector<pair<Sensor, int>> rankSensors(Sensor *sens, Utilisateur * user, Date date, int nbJours);

    int calculerIndiceAtmo(Coordonnees coord, int rayon, Utilisateur * user, Date date, int nbJour );

    int calculerIndiceAtmo(Sensor sensor, Data data, Date date, int nbJour );

//------------------------------------------------- Surcharge d'opérateurs
    Data & operator = ( const Data & unData );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    vector<Sensor> getSensors();

    vector<Measurement> getMeasurements();

    Data ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

    ~Data ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    vector<Measurement> measurements;
    vector<Sensor> sensors;
    vector<Provider> providers;
    vector<IndPriv> users;
    vector<Cleaner> cleaners;
    vector<Attribute> attributes;

};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H

