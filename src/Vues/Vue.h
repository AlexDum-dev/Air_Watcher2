#ifndef VUE_H
#define VUE_H

#include "../Controller/ControllerUser.h"
#include "../Model/Utilisateur.h"
#include "../Model/AgenceGouv.h"

//------------------------------------------------------------------------
// Rôle de la classe <Vue>
// Classe abstraite dont hérite toutes les vues
//
//------------------------------------------------------------------------


class Vue 
{
    public : 

        char MenuDepart();
        
        //Méthode pour affihcer le menu
        virtual void afficheMenu(){};

        //Méthode pour le choix d'un option d'un menu
        virtual void ChoixMenu(char userEntry) {};

        //Méthode qui affiche les données relatives à l'inscription
        virtual void afficheInscription() {};

        //Méthode qui affiche les données relatives à l'impact des Cleaners
        virtual void afficheImpactCleaner() {};

        //Méthode qui affiche les données relatives à l'authentification
        virtual void afficheAuthentification() {};

        //Méthode qui affiche les données par zone
        virtual void afficheConsultDataZone() {};

        virtual void setController(ControllerUser controller);

        //-------------------------------------------- Constructeurs - destructeur
        
        //Constructeur
        Vue();

        //Destructeur
        virtual ~Vue();

    protected : 
        ControllerUser controller;

};

#endif