/*************************************************************************
                           IndPriv  -  description
*************************************************************************/

//----------Réalisation de la classe <IndPriv> (fichier IndPriv.cpp)

//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include système
#include <iostream>
#include <cstring>
#include <string>
using namespace std;
//------------------------------------------------------ Include personnel
#include "IndPriv.h"



//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques


/*Méthode InstallSensor
void IndPriv :: installSensor(Coordonnees coord)
{
cout << "Le sensor à installer est.. "<<endl;
}//------Fin de la Méthode installSensor*/


//-------------------------------------------- Constructeurs - destructeur
//Constructeur
IndPriv::IndPriv (unsigned int id1, string mdp, string  admail, string adresse, vector <Sensor> sensors)
{
	this->adresse = adresse;
    this->trust = true;
    this->points = 0;
    this->sensors = sensors;
    id = id1;
    adresse = admail;
    mdp = mdp;

    #ifdef MAP
        cout << "Appel au constructeur de <IndPriv>" << endl;
    #endif
}//----- Fin du constructeur IndPriv
 

//Destructeur
IndPriv::~IndPriv () 
{
    #ifdef MAP
        cout << "Appel au destructeur de <IndPriv>" << endl;
    #endif

} //----- Fin de destructeur ~IndPriv