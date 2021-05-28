#include "ControllerUser.h"

ControllerUser::ControllerUser(Utilisateur * unUser)
{
    user = unUser;

}

ControllerUser::ControllerUser()
{
    
}
/*
vector<pair<Sensor, int>> ControllerUser::actionMenuRankSensors(string sensorID, Date date, int nbJours)
{
    Sensor *sens;
    for ( Sensor s : data.getSensors()){
        if(s.getId()==sensorID){
            *sens=s;
        }
    }
    return(user -> rankSensors(sens, data, date, nbJours));
}

int ControllerUser::actionMenuCalculerIndiceAtmo(Coordonnees coord, int rayon, Date date, int nbJours)
{
    return(user -> calculerIndiceAtmo(coord, rayon, data, date, nbJours));
}

int ControllerUser::actionMenuCalculerIndiceAtmo(string sensorID, Date date, int nbJours)
{
    Sensor *sens;
    for ( Sensor s : data.getSensors()){
        if(s.getId()==sensorID){
            *sens=s;
        }
    }
    return(user -> calculerIndiceAtmo(*sens, data, date, nbJours));
}
*/

ControllerUser::~ControllerUser()
{

}