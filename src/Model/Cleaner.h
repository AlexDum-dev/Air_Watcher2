#if ! defined ( CLEANER_H )
#define CLEANER_H

#include "Coordonnees.h"
#include "Date.h"
//------------------------------------------------------------------------
// Rôle de la classe <Cleaner>
// Créer l'instance Cleaners et gérer les méthodes
//------------------------------------------------------------------------


class Cleaner
{

public:

	//Constructeur
	Cleaner();

	Cleaner (string id, Coordonnees coordinate, Date start, Date stop); 
	
	//getter de l'Id d'un cleaner
	string getId();

	// Destructeur
	virtual ~Cleaner ();

	//Getter des coordonnées d'un cleaner
	Coordonnees getCoordonnees();

	//Getter de date de début
	Date getDateDebut();

	//Getter de date de fin 
	Date getDateFin();

	
	
	
protected:

	string id;
	Coordonnees coordinate;
	Date start;
	Date stop;
	
};
#endif