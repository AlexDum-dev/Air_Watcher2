#include "Coordonnees.h"


//getter de Latitude
float Coordonnees::GetLatitude()
{
    return this->latitude;
}

//getter de Longitude
float Coordonnees::GetLongitude()
{
    return this->longitude;
}

//setter de Latitude
void Coordonnees::SetLatitude(float uneLatitude)
{
    this->latitude = uneLatitude;
}

//setter de Longitude
void Coordonnees::SetLongitude(float uneLongitude)
{
    this->longitude = uneLongitude;
}

//------------------------------------------------- Surcharge d'opérateurs

//-------------------------------------------- Constructeurs - destructeur

//Constructeur vide
Coordonnees::Coordonnees()
{
    
}

//Constructeur
Coordonnees::Coordonnees(float uneLatitude, float uneLongitude)
{
    latitude = uneLatitude;
    longitude = uneLongitude;
}

//Destructeur
Coordonnees::~Coordonnees()
{

}