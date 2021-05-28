#ifndef VUE_H
#define VUE_H

#include "../Controller/ControllerUser.h"
#include "../Model/Utilisateur.h"
#include "../Model/AgenceGouv.h"



class Vue 
{
    public : 

        Vue(){}
        
        virtual void afficheMenu(){}

        virtual void ChoixMenu(char userEntry) const = 0;

        virtual void afficheInscription(){}

        virtual void afficheImpactCleaner(){}

        virtual void afficheAuthentification(){}

        virtual void afficheConsultDataZone(){}

        virtual ~Vue(){}



    protected : 

        ControllerUser controller;

};

#endif