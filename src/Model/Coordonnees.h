#if ! defined ( Coordonnees_H )
#define Coordonnees_H

//------------------------------------------------------------------------
// Rôle de la classe <Coordonnees>
// Créer une entité coordonnées à partir de longitude et de latitude
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

    //getter de Latitude
    float GetLatitude ( );
  
    //getter de Longitude
    float GetLongitude ( );
  
    //setter de Latitude
    void SetLatitude ( float uneLatitude );
    
    //setter de Longitude
    void SetLongitude ( float uneLongitude );
    


//-------------------------------------------- Constructeurs - destructeur
    
    //Constructeur
    Coordonnees();
    
    Coordonnees ( float uneLatitude, float uneLongitude );

    //Destructeur
    ~Coordonnees();
    

//------------------------------------------------------------------ PROTECTED

protected:
//----------------------------------------------------- Attributs protégés
    float latitude, longitude;

};



#endif

