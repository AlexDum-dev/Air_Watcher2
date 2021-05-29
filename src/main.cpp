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
    //data.initMeasurements("./dataset/measurements.csv");

    /*
    for(unsigned int i =0; i<data.getCleaners().size(); i++){
        cout << "Cleaner :" <<data.getCleaners().at(i).getId()<<endl;
        cout << "DateDebut :" <<data.getCleaners().at(i).getDateDebut()<<endl;
        cout << "Latitude :" <<data.getCleaners().at(i).getCoordonnees().GetLatitude()<<endl;
        cout << "Longitude :" <<data.getCleaners().at(i).getCoordonnees().GetLongitude()<<endl;
        cout << "DateFin :" <<data.getCleaners().at(i).getDateFin()<<endl;

    }*/





    return 0;
}
