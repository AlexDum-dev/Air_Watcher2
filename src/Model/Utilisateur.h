#if ! defined ( UTILISATEUR_H )
#define UTILISATEUR_H

//--------------------------------------------------- Interfaces utilisées
#include <string>
#include <vector>
using namespace std;
#include "Coordonnees.h"
#include "Date.h"
//------------------------------------------------------------- Constantes

//------------------------------------------------------------------ Types

//------------------------------------------------------------------------
//  
//
//------------------------------------------------------------------------

class Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:

   

 
//-------------------------------------------- Constructeurs - destructeur

    //Utilisateur (unsigned int id, string mdp, string  admail );
    // Mode d'emploi :
    // Contruit un objet de type Data vide.
    // Contrat :
    //

    Utilisateur() {} 

    //virtual Utilisateur * Authentificate(string id, string mdp){}


    //virtual int ImpactCleaner(Coordonnees coord, Date date);

    //virtual vector<Sensor> consultDataZone(Cordonnees coord, int rayon);

    //virtual void deconnexion()

    virtual ~Utilisateur ( ){}
    // Mode d'emploi :
    // Détruit l'objet Data.
    // Contrat :
    //

//------------------------------------------------------------------ PRIVE

protected:
//----------------------------------------------------- Méthodes protégées


    

//----------------------------------------------------- Attributs protégés

    unsigned int id;
    string mdp;
    string mail;
};

//-------------------------------- Autres définitions dépendantes de <Data>

#endif // UTILISATEUR_H