
//---------- Interface de la classe <Coordonnees> (fichier Coordonnees.h) ----------------
#if ! defined ( Coordonnees_H )
#define Coordonnees_H

//--------------------------------------------------- Interfaces utilisées

//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
// Rôle de la classe <Coordonnees>
//
//
//------------------------------------------------------------------------

class Coordonnees
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    // type Méthode ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    float GetLatitude ( );
  

    float GetLongitude ( );
  

    void SetLatitude ( float uneLatitude );
    

    void SetLongitude ( float uneLongitude );
    

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
    Coordonnees();
    // Mode d'emploi :
    //
    // Contrat :
    //

    Coordonnees ( float uneLatitude, float uneLongitude );

    virtual ~Coordonnees ( );
    // Mode d'emploi :
    //
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées

//----------------------------------------------------- Attributs protégés
    float latitude, longitude;

};

//-------------------------------- Autres définitions dépendantes de <Xxx>

#endif // XXX_H

