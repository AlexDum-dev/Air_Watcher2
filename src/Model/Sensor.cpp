#include "Sensor.h"

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