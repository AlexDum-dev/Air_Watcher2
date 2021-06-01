#include <iostream>
#include <cstring>
#include <string>
using namespace std;
#include "IndPriv.h"


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
}
 

//Destructeur
IndPriv::~IndPriv () 
{
    #ifdef MAP
        cout << "Appel au destructeur de <IndPriv>" << endl;
    #endif

} 