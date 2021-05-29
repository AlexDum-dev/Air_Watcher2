#if ! defined ( SENSOR_H )
#define SENSOR_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
using namespace std;
#include "Coordonnees.h"
#include "Date.h"


//------------------------------------------------------------------------
// Rôle de la classe <Sensor>
// Créer l'instance Sensor et gérer les méthodes
//
//------------------------------------------------------------------------

class Sensor
{
//----------------------------------------------------------------- PUBLIC

public:

//----------------------------------------------------- Méthodes publiques

    //getter de coordonnees
    Coordonnees getCoordonnees();

    //getter d'Id
    string getId();


//-------------------------------------------- Constructeurs - destructeur

    //Constructeur
    Sensor(string unId, Coordonnees uneCoord);

    //Destructeur
    ~Sensor ( );

//-------------------------------------------------------------- PROTECTED

protected:

//----------------------------------------------------- Attributs protégés

    string id;
    Coordonnees coord;
};


#endif 