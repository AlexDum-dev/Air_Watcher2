#include <iostream>
#include "./Model/Data.h"
#include "./Model/Date.h"


using namespace std;

int main()
{
    Data data;
    Date date(10,1,2021);

    //data.initSensors("./dataset/sensors.csv");
    //data.initCleaners("./dataset/cleaners.csv");
    data.initMeasurements("./dataset/measurements.csv");





    return 0;
}
