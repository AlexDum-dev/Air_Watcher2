#if !defined(INDPRIV_H)
#define INDPRIV_H

//#include "Sensor.h"
#include "Utilisateur.h"
#include "Sensor.h"
//------------------------------------------------------------------------
// Rôle de la classe <IndPriv>
// Créer l'instance Individu Privé et gérer les méthodes
//------------------------------------------------------------------------

class IndPriv : public Utilisateur
{
	//----------------------------------------------------------------- PUBLIC

public:

	//Constructeur
	IndPriv(unsigned int id1, string mdp, string admail, string adresse, vector<Sensor> sensors); 
	
	//Destructeur
	~IndPriv(); 

	//------------------------------------------------------------------ Protégé

protected:
	string adresse;
	bool trust;
	int points;
	vector<Sensor> sensors;

	//Les autres attributs de cette classe sont hérités de la classe mère: Utilisateur
};
#endif