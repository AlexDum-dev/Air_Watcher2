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

//-------------------------------------------- Constructeurs - destructeur

	//Constructeur
	Attribute (string unId, string unUnit, string unDescription); 
	

	// Destructeur
	virtual ~Attribute (); 

//------------------------------------------------------------------ Protégé
	
protected:

    string id;
    string unit;
    string description;

};
#endif