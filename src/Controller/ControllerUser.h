#ifndef CONTROLLERUSER_H 
#define CONTROLLERUSER_H

#include <iostream>
#include "../Model/Coordonnees.h"
#include <vector> 
#include "../Model/Date.h"
#include "../Model/Sensor.h"
#include "../Model/Utilisateur.h"
#include "../Model/Data.h"



class ControllerUser 
{
    public : 

        ControllerUser();
        
        ControllerUser(Utilisateur * unUser);

        //Controller pour la fonctionnalite Rank Sensors de l'Agence Gouvernementale
        vector<pair<Sensor, int>> actionMenuRankSensors(string sensorID, Date date, int nbJours);

        //Controller pour la fonctionnalite de calcul de l'indice ATMO (en fct des coordonnées) de l'Agence Gouvernementale
        int actionMenuCalculerIndiceAtmo(Coordonnees coord, int rayon, Date date, int nbJours); 

        //Controller pour la fonctionnalite de calcul de l'indice ATMO (par sensor) de l'Agence Gouvernementale
        int actionMenuCalculerIndiceAtmo(string sensorID, Date date, int nbJours);

        ~ ControllerUser(); 

    protected : 

        Data data;
        Utilisateur * user;
};

#endif
