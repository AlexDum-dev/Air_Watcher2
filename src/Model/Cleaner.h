/*************************************************************************
                           Cleaner  -  description
*************************************************************************/

//---------- Interface de la classe <Cleaner> (fichier Cleaner.h) ----
#if ! defined ( CLEANER_H )
#define CLEANER_H

//--------------------------------------------------- Interfaces utilisées
#include "Coordonnees.h"
#include "Date.h"
//------------------------------------------------------------------------
// Rôle de la classe <Cleaner>
//
//------------------------------------------------------------------------


class Cleaner
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

 
	

//-------------------------------------------- Constructeurs - destructeur

	Cleaner();
	Cleaner (string id, Coordonnees coordinate, Date start, Date stop); //Constructeur
	// Mode d'emploi :
	//              
	// Contrat : Aucun
	//

	string getId();

	virtual ~Cleaner (); // Destructeur
	// Mode d'emploi : 
	//
	// Contrat : Aucun
	//

//------------------------------------------------------------------ Protégé
	
protected:

string id;
Coordonnees coordinate;
Date start;
Date stop;

//Les autres attributs de cette classe sont hérités de la classe mère: Utilisateur
	
};
#endif