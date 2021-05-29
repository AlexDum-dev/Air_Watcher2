//---------------------------------------------------------------- INCLUDE

//------------------------------------------------------ Include personnel

#include "Sensor.h"


//----------------------------------------------------- Méthodes publiques

//getter de coordonnees
Coordonnees Sensor::getCoordonnees()
{
    return coord;
}

//getter d'Id
string Sensor::getId()
{
    return id;
}

//-------------------------------------------- Constructeurs - destructeur

//Constructeur
Sensor::Sensor(string unId, Coordonnees uneCoord)
{
    id = unId;
    coord = uneCoord;
}

//Destructeur
Sensor::~Sensor()
{
    
}