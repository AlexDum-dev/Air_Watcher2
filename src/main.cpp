#include <iostream>
#include "./Model/Data.h"
#include "./Vues/Vue.h"
#include "./Vues/VueIndPriv.h"
#include "./Vues/VueInvite.h"
#include "./Vues/VueProvider.h"
#include "./Vues/VueAgenceGouv.h"


using namespace std;

int main()
{
    Data data;
    //Lecture de la bdd 
    data.initMeasurements("./dataset/measurements.csv");
    data.initSensors("./dataset/sensors.csv");

    ControllerUser controller(data);

    Vue vueDepart;

    Vue * vueActuelle;
    char choixMenuDepart;
    do{
        choixMenuDepart = vueDepart.MenuDepart(); 
        switch (choixMenuDepart)
        {
        case '1':
            vueActuelle = new VueAgenceGouv(); 
            vueActuelle->setController(controller);
            vueActuelle->afficheMenu();
            break;
        case '2':
            vueActuelle = new VueIndPriv(); 
            vueActuelle->setController(controller);
            vueActuelle->afficheMenu();
            break;
        case '3':
            vueActuelle = new VueProvider();
            vueActuelle->setController(controller);
            vueActuelle->afficheMenu(); 
            break;
        case '4':
            vueActuelle = new VueInvite();
            vueActuelle->setController(controller);
            vueActuelle->afficheMenu(); 
            break;
        case 'q':
            if(vueActuelle != nullptr)
                delete vueActuelle;
            break;
        default:
            break;
        }
    } while (choixMenuDepart != 'q');
    
    return 0;
}
