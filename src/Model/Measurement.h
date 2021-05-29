#if ! defined(MEASUREMENT_H)
#define MEASUREMENT_H

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <string>
using namespace std;
#include "Date.h"
//--------------------------------------------------- Interfaces utilisées
//#include ".h"
//#include ".h"

//------------------------------------------------------------------------
// Rôle de la classe <Measurement>
// Créer l'instance Measurement et gérer les méthodes
//------------------------------------------------------------------------


class Measurement{
//----------------------------------------------------------------- PUBLIC

public:

	//-------------------------------------------- méthodes publique

	//getter de l'id d'un sensor
	string getSensorId();

	//getter de date
	Date getDate();

	//getter de valeur d'un sensor
	double getValue();

	string getAttributeId();

	//-------------------------------------------- Constructeurs - destructeur

	//Constructeur
	Measurement (string sensorId, Date timestamp, double value, string attributeId);

	// Destructeur
	virtual ~Measurement (); 

//------------------------------------------------------------------ Protégé
	
protected:

string sensorId;
Date timestamp;
double value;
string attributeId;

	
};
#endif