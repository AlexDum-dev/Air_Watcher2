#include "ControllerUser.h"

ControllerUser::ControllerUser(const Data & uneData)
{
    data = uneData;
}

ControllerUser::ControllerUser()
{
    
}

vector<pair<string, int>> ControllerUser::actionMenuRankSensors(string sensorID, Date date, int nbJours)
{
    return(data.rankSensors(sensorID, date, nbJours));
}

int ControllerUser::actionMenuCalculerIndiceAtmo(Coordonnees coord, double rayon, Date date, int nbJours)
{
    return(data.calculerIndiceAtmo(coord, rayon, date, nbJours));
}

int ControllerUser::actionMenuCalculerIndiceAtmo(string sensorID, Date date, int nbJours)
{
    return(data.calculerIndiceAtmo(sensorID, date, nbJours));
}


ControllerUser::~ControllerUser()
{

}