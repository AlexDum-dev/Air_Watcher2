using namespace std;
#include <iostream>

#include <vector>
#include "Date.h"
#include "Coordonnees.h"  
#include "Utilisateur.h"
#include "Cleaner.h"
#include "Provider.h"


//setter de cleaners
void Provider::SetCleaners(vector<Cleaner> c)
{
    cleaners = c;
}

//-------------------------------------------- Constructeurs - destructeur

//Co,structeur de copie
Provider::Provider ( const Provider & unProvider )
{
#ifdef MAP
    cout << "Appel au constructeur de copie de <Provider>" << endl;
#endif
} 

//Constructeur
Provider::Provider (string id, string mdp, string  admail )
{
    id = id;
    mdp = mdp;
    admail = admail;
#ifdef MAP
    cout << "Appel au constructeur de <Provider>" << endl;
#endif
}

//Destructeur
Provider::~Provider ( )
{
#ifdef MAP
    cout << "Appel au destructeur de <Provider>" << endl;
#endif
} 
