/*************************************************************************
                           Measurement  -  description
*************************************************************************/

//---------- Interface de la classe <Measurement> (fichier Measurement.h) ----
#if ! defined(MEASUREMENT_H)
#define MEASUREMENT_H

#include <string>
using namespace std;
#include "Date.h"
//--------------------------------------------------- Interfaces utilisées
//#include ".h"
//#include ".h"
//------------------------------------------------------------------------
// Rôle de la classe <Measurement>
//
//------------------------------------------------------------------------


class Measurement{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

       

	

//-------------------------------------------- Constructeurs - destructeur
	Measurement (string sensorId, Date timestamp, double value, string attributeId); //Constructeur
	// Mode d'emploi :
	//              
	// Contrat : Aucun
	//

	string getSensorId();

	Date getDate();

	double getValue();

	virtual ~Measurement (); // Destructeur
	// Mode d'emploi : 
	//
	// Contrat : Aucun
	//

//------------------------------------------------------------------ Protégé
	
protected:

string sensorId;
Date timestamp;
double value;
string attributeId;

	
};
#endif