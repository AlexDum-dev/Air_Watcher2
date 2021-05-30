#if ! defined ( Provider_H )
#define Provider_H

//--------------------------------------------------- Interfaces utilisées
#include <vector>
#include "Date.h"
#include "Coordonnees.h"  
#include "Utilisateur.h"
#include "Cleaner.h"


//------------------------------------------------------------------------
// Rôle de la classe <Provider>
// Créer l'instance Providers et gérer les méthodes
//
//------------------------------------------------------------------------

class Provider : public Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques

    //virtual bool Inscription ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    // virtual bool Authentification ( liste des paramètres );
    // Mode d'emploi :
    //
    // Contrat :
    //

    //virtual int ImpactCleaner ( Coordonnees coord, Date date);
    // Mode d'emploi :
    // 
    // Contrat :
    //

    //setter de Cleaners
    void SetCleaners(vector<Cleaner> c);


//------------------------------------------------- Surcharge d'opérateurs
    //Provider & operator = ( const Provider & unProvider );
    

//-------------------------------------------- Constructeurs - destructeur

    //Constructeur de copie
    Provider ( const Provider & unProvider );

    //Constructeur
    Provider ( string id, string mdp, string  admail);

    //Destructeur
    virtual ~Provider ( );


//------------------------------------------------------------------ PROTECTED

protected:

//----------------------------------------------------- Attributs protégés
    vector<Cleaner> cleaners;

    //Les autres attributs de cette classe sont hérités de la classe mère: Utilisateur

};



#endif // Provider_H

