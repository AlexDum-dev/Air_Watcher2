#if ! defined(MEASUREMENT_H)
#define MEASUREMENT_H

#include <string>
using namespace std;
#include "Date.h"

//------------------------------------------------------------------------
// Rôle de la classe <Measurement>
// Créer l'instance Measurement et gérer les méthodes
//------------------------------------------------------------------------


class Measurement{

public:

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
	
protected:

string sensorId;
Date timestamp;
double value;
string attributeId;

	
};
#endif