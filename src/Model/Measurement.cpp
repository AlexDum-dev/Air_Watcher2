#include <iostream>
#include <string>
using namespace std;

//------------------------------------------------------ Include personnel
#include "Measurement.h"
#include "Date.h"

//-------------------------------------------- Constructeurs - destructeur

//Constructeur
Measurement:: Measurement(string unsensorId, Date untimestamp, double unvalue, string unattributeId)
{
    sensorId= unsensorId;
    timestamp= untimestamp;
    value=unvalue;
    attributeId = unattributeId;
}

//Destructeur
Measurement::~Measurement()
{
    #ifdef MAP
        cout << "Appel au destructeur de <Measurement>" << endl;
    #endif
}

//getter de date
Date Measurement::getDate()
{
    return timestamp;
}

//getter de valeur d'un sensor
double Measurement::getValue()
{
    return value;
}

//getter de l'id d'un sensor
string Measurement::getSensorId()
{
    return sensorId;
}
