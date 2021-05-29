//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;
//------------------------------------------------------ Include personnel
#include "Attribute.h"

//----------------------------------------------------------------- PUBLIC


//-------------------------------------------- Constructeurs - destructeur

//Constructeur
Attribute::Attribute (string unId, string unUnit, string unDescription)
{
    this->id = unId;
    this->unit = unUnit;
    this->description = unDescription;

    #ifdef MAP
        cout << "Appel au constructeur de <Attribute>" << endl;
    #endif
}
 

//Destructeur
Attribute::~Attribute () 
{
    #ifdef MAP
        cout << "Appel au destructeur de <Attribute>" << endl;
    #endif

}