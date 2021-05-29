#include <iostream>
#include "./Model/Data.h"
#include "./Model/Date.h"


using namespace std;

int main()
{
    Data data;
    Date date(10,1,2021);

    Coordonnees coord(0.0,0.0);
    data.initSensors("fic");
    data.initMeasurements("fic");

    //cout << data.calculerIndiceAtmo(coord, 0.5, date, 10) << endl;
    cout << data.rankSensors("sensor0", date, 10).at(0).first << endl;
    cout << data.rankSensors("sensor0", date, 10).at(1).first << endl;
    cout << data.rankSensors("sensor0", date, 10).at(2).first << endl;
    return 0;
}
