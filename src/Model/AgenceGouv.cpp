#include <iostream>
#include <string>
using namespace std;

//------------------------------------------------------ Include personnel
#include "AgenceGouv.h"
#include "Date.h"
#include <math.h>
#include <algorithm>    // std::sort

//-------------------------------------------- Constructeurs - destructeur
bool sortbysec(const pair<Sensor,int> &a, const pair<Sensor,int> &b)
{
    return (a.second < b.second);
}
//Constructeur
AgenceGouv:: AgenceGouv( unsigned int identif , string adresseMail, string motDePasse)
{
    id= identif;
    mail= adresseMail;
    mdp=motDePasse;
}
//Destructeur

AgenceGouv::~AgenceGouv()
{
    #ifdef MAP
        cout << "Appel au destructeur de <TrajetSimple>" << endl;
    #endif
}

//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

// Méthode qui nous permet de classer les sensors 



