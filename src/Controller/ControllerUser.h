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

        vector<pair<Sensor, int>> actionMenuRankSensors(string sensorID, Date date, int nbJours);

        int actionMenuCalculerIndiceAtmo(Coordonnees coord, int rayon, Date date, int nbJours); 

        int actionMenuCalculerIndiceAtmo(string sensorID, Date date, int nbJours);

        ~ ControllerUser(); 

    protected : 

        Data data;
        Utilisateur * user;
};

#endif
