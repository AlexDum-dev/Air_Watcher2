#include "Sensor.h"

Sensor::Sensor(string unId, Coordonnees uneCoord)
{
    id = unId;
    coord = uneCoord;
}

Coordonnees Sensor::getCoordonnees()
{
    return coord;
}

string Sensor::getId()
{
    return id;
}

Sensor::~Sensor()
{
    
}