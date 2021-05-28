//---------- Interface de la classe <Trajet> (fichier Trajet.h) ----------------
#if ! defined ( AGENCEGOUV_H )
#define AGENCEGOUV_H

#include "Utilisateur.h"
#include "Sensor.h"
#include "Coordonnees.h"
#include <vector>
#include "Date.h"


//------------------------------------------------------------------------
// Rôle de la classe <AgenceGouv>
// Créer l'instance Agence Gouvernementale et gérer les méthodes
//
//------------------------------------------------------------------------


class AgenceGouv : public Utilisateur
{
//----------------------------------------------------------------- PUBLIC

public:
//----------------------------------------------------- Méthodes publiques
    
    

//-------------------------------------------- Constructeurs - destructeur
    
    AgenceGouv (unsigned int id, string adresseMail, string mdp); //Constructeur
	
	virtual ~AgenceGouv (); // Destructeur
	

};

#endif