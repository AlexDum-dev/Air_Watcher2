#if ! defined ( Provider_H )
#define Provider_H

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

    //setter de Cleaners
    void SetCleaners(vector<Cleaner> c);
    

    //Constructeur de copie
    Provider ( const Provider & unProvider );

    //Constructeur
    Provider ( string id, string mdp, string  admail);

    //Destructeur
    virtual ~Provider ( );


protected:
    vector<Cleaner> cleaners;

    //Les autres attributs de cette classe sont hérités de la classe mère: Utilisateur

};



#endif // Provider_H

