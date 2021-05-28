#include <iostream>
#include "./Model/Data.h"


using namespace std;

int main()
{
    Data data;


    data.initSensors("./dataset/sensors.csv");
    cout << data.getSensors().at(0).getId() << endl;

    return 0;
}
