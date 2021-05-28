#include "Coordonnees.h"


float Coordonnees::GetLatitude()
{
    return this->latitude;
}

float Coordonnees::GetLongitude()
{
    return this->longitude;
}

void Coordonnees::SetLatitude(float uneLatitude)
{
    this->latitude = uneLatitude;
}

void Coordonnees::SetLongitude(float uneLongitude)
{
    this->longitude = uneLongitude;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur
Coordonnees::Coordonnees()
{
    
}
Coordonnees::Coordonnees(float uneLatitude, float uneLongitude)
// Mode d'emploi :
//
// Contrat :
//
{
    latitude = uneLatitude;
    longitude = uneLongitude;
}


Coordonnees::~Coordonnees()
{

}