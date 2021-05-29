
//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
using namespace std;
//------------------------------------------------------ Include personnel
#include "Cleaner.h"

//----------------------------------------------------------------- PUBLIC

//-------------------------------------------- Constructeurs - destructeur

//Constructeur vide
Cleaner::Cleaner()
{
    
}

//Constructeur
Cleaner::Cleaner (string id, Coordonnees coordinate, Date start, Date stop)
{
    this->id = id;
    this->coordinate = coordinate;
    this->start = start;
    this->stop = stop;

    #ifdef MAP
        cout << "Appel au constructeur de <Cleaner>" << endl;
    #endif
}

//getter de l'Id d'un cleaner
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

}