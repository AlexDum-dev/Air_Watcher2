#if ! defined ( UTILISATEUR_H )
#define UTILISATEUR_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
using namespace std;
#include "Coordonnees.h"
#include "Date.h"


//------------------------------------------------------------------------
// Rôle de la classe <Utilisateur>
// Classe abstraite dont dérive d'autres classes
//
//------------------------------------------------------------------------

class Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:


//-------------------------------------------- Méthodes publiques

    //Méthode d'authetification
    //virtual Utilisateur * Authentificate(string id, string mdp){}

    //Méthode qui determine l'impacte des Cleaner
    //virtual int ImpactCleaner(Coordonnees coord, Date date);

    //Méthodes pour consulter la data par zone
    //virtual vector<Sensor> consultDataZone(Cordonnees coord, int rayon);

    //Méthode de déconnexion
    //virtual void deconnexion()

//-------------------------------------------- Constructeurs - destructeur

    //Utilisateur (unsigned int id, string mdp, string  admail );
    
    //Constructeur
    Utilisateur() {} 

    //Destructeur
    virtual ~Utilisateur ( ){}


//-------------------------------------------------------------- PROTECTED

protected:

//----------------------------------------------------- Attributs protégés

    unsigned int id;
    string mdp;
    string mail;
};


#endif 