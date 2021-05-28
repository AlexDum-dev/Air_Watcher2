/*************************************************************************
                           Cleaner  -  description
*************************************************************************/

//---------- Interface de la classe <Cleaner> (fichier Cleaner.h) ----
#if ! defined ( ATTRIBUTE_H )
#define ATTRIBUTE_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
using namespace std;

//------------------------------------------------------------------------
// Rôle de la classe <Attribute>
//
//------------------------------------------------------------------------


class Attribute
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

 
	

//-------------------------------------------- Constructeurs - destructeur
	Attribute (string unId, string unUnit, string unDescription); //Constructeur
	// Mode d'emploi :
	//              
	// Contrat : Aucun
	//

	virtual ~Attribute (); // Destructeur
	// Mode d'emploi : 
	//
	// Contrat : Aucun
	//

//------------------------------------------------------------------ Protégé
	
protected:

    string id;
    string unit;
    string description;

//Les autres attributs de cette classe sont hérités de la classe mère: Utilisateur
	
};
#endif