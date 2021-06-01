#if ! defined ( Coordonnees_H )
#define Coordonnees_H


class Coordonnees
{
//----------------------------------------------------------------- PUBLIC

public:

    //getter de Latitude
    float GetLatitude ( );
  
    //getter de Longitude
    float GetLongitude ( );
  
    //setter de Latitude
    void SetLatitude ( float uneLatitude );
    
    //setter de Longitude
    void SetLongitude ( float uneLongitude );
    
    
    //Constructeur
    Coordonnees();
    
    Coordonnees ( float uneLatitude, float uneLongitude );

    //Destructeur
    ~Coordonnees();
    

protected:

    float latitude, longitude;

};



#endif

