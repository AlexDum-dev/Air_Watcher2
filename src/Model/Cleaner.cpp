/*************************************************************************
                           Cleaner  -  description
*************************************************************************/

//----------Réalisation de la classe <Cleaner> (fichier Cleaner.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;
//------------------------------------------------------ Include personnel
#include "Cleaner.h"

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques



//-------------------------------------------- Constructeurs - destructeur
//Constructeur

Cleaner::Cleaner()
{
    
}
Cleaner::Cleaner (string id, Coordonnees coordinate, Date start, Date stop)
{
    this->id = id;
    this->coordinate = coordinate;
    this->start = start;
    this->stop = stop;

    #ifdef MAP
        cout << "Appel au constructeur de <Cleaner>" << endl;
    #endif
}//----- Fin du constructeur Cleaner

string Cleaner::getId()
{
    return id;
}
 

//Destructeur
Cleaner::~Cleaner () 
{
    #ifdef MAP
        cout << "Appel au destructeur de <Cleaner>" << endl;
    #endif

} //----- Fin de destructeur ~Cleaner