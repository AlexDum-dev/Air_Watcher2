/*************************************************************************
                           Attribute  -  description
*************************************************************************/

//----------Réalisation de la classe <Attribute> (fichier Attribute.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;
//------------------------------------------------------ Include personnel
#include "Attribute.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques



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
}//----- Fin du constructeur Attribute
 

//Destructeur
Attribute::~Attribute () 
{
    #ifdef MAP
        cout << "Appel au destructeur de <Attribute>" << endl;
    #endif

} //----- Fin de destructeur ~Attribute