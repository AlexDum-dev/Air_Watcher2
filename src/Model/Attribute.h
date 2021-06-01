#if ! defined ( ATTRIBUTE_H )
#define ATTRIBUTE_H

#include <string>
using namespace std;


class Attribute
{


public:


	//Constructeur
	Attribute (string unId, string unUnit, string unDescription); 
	

	// Destructeur
	virtual ~Attribute (); 

	
protected:

    string id;
    string unit;
    string description;

};
#endif