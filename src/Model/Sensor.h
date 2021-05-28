#if ! defined ( SENSOR_H )
#define SENSOR_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
using namespace std;
#include "Coordonnees.h"
#include "Date.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
//  
//
//------------------------------------------------------------------------

class Sensor
{
//----------------------------------------------------------------- PUBLIC

public:

   

 
//-------------------------------------------- Constructeurs - destructeur

    Sensor(string unId, Coordonnees uneCoord);

    Coordonnees getCoordonnees();

    string getId();

    ~Sensor ( );
    // Mode d'emploi :
    // Détruit l'objet Data.
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées


    

//----------------------------------------------------- Attributs protégés

    string id;
    Coordonnees coord;
};

//-------------------------------- Autres définitions dépendantes de <Data>

#endif // SENSOR_H