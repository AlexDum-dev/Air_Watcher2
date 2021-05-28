/*************************************************************************
                           Provider  -  description
                             -------------------
    début                : $DATE$
    copyright            : (C) $YEAR$ par $AUTHOR$
    e-mail               : $EMAIL$
*************************************************************************/

//---------- Interface de la classe <Provider> (fichier Provider.h) ----------------
#if ! defined ( Provider_H )
#define Provider_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include "Date.h"
#include "Coordonnees.h"  
#include "Utilisateur.h"
#include "Cleaner.h"

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Provider>
//
//
//------------------------------------------------------------------------

class Provider : public Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    //virtual bool Inscription ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    // virtual bool Authentification ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    //virtual int ImpactCleaner ( Coordonnees coord, Date date);
    // Mode d'emploi :
    // 
    // Contrat :
    //

    void SetCleaners(vector<Cleaner> c);


//------------------------------------------------- Surcharge d'opérateurs
    Provider & operator = ( const Provider & unProvider );
    // Mode d'emploi :
    //
    // Contrat :
    //


//-------------------------------------------- Constructeurs - destructeur
    Provider ( const Provider & unProvider );
    // Mode d'emploi (constructeur de copie) :
    //
    // Contrat :
    //

    Provider ( string id, string mdp, string  admail);
    // Mode d'emploi :
    //
    // Contrat :
    //

    virtual ~Provider ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    vector<Cleaner> cleaners;

};

//-------------------------------- Autres définitions dépendantes de <Provider>

#endif // Provider_H

