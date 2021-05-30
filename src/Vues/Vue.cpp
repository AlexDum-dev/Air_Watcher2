#include "Vue.h"


Vue::Vue()
{

}


char Vue::MenuDepart()
{
    cout << "Qui êtes-vous ?" << endl;
    cout << "1 : Agence Gouvernementale" << endl;
    cout << "2 : Individu privé" << endl;
    cout << "3 : Provider" << endl;
    cout << "4 : Invite" << endl;
    cout << "q : Quitter l'application" << endl;

    char c;
    cin >> c;

    while(c != '1' and c != '2' and c != '3' and c != '4' and c!= 'q')
    {
        cout << "Réponse invalide, veuillez recommencer :" << endl;
        cin >> c;
    }

    return c;
}

void Vue::setController(ControllerUser unController)
{
    controller = unController;
}

Vue::~Vue()
{

}