#include <iostream>
#include "./Model/Data.h"
#include "./Vues/Vue.h"
#include "./Vues/VueIndPriv.h"
#include "./Vues/VueInvite.h"
#include "./Vues/VueProvider.h"
#include "./Vues/VueAgenceGouv.h"
#include <cassert>
using namespace std;

void testCalculIndiceAtmoOneSensor(Data data);
void testCalculIndiceAtmoInAZone(Data data);
void testRankSensor(Data data);
void testLectureFichier();

int main()
{
    Coordonnees coord(0.0, 0.0);
    Sensor s("sensor0", coord); //Atmo = 1

    Coordonnees coord1(0.1, 0.1);
    Sensor s1("sensor1", coord1); //Atmo = 2

    Coordonnees coord2(1.0, 1.0);
    Sensor s2("sensor2", coord2); //atmo = 1 

    Data data;
    data.addSensor(s);data.addSensor(s1);data.addSensor(s2);


    bool res = true;
    //Date * date = new Date(20,1,2021);
    Date date(20,1,2021); 
    Measurement m("sensor0", date,1.0, "03");
    Measurement m1("sensor0", date,2.0, "NO2");
    Measurement m2("sensor0", date,3.0, "SO2");
    Measurement m3("sensor0", date,4.0, "PM10");

    data.addMeasurements(m);data.addMeasurements(m1);data.addMeasurements(m2);data.addMeasurements(m3);

    Measurement m4("sensor1", date,1.0, "03");
    Measurement m5("sensor1", date,2.0, "NO2");
    Measurement m6("sensor1", date,3.0, "SO2");
    Measurement m7("sensor1", date,10.0, "PM10");

    data.addMeasurements(m4);data.addMeasurements(m5);data.addMeasurements(m6);data.addMeasurements(m7);

    Measurement m8("sensor2", date,1.0, "03");
    Measurement m9("sensor2", date,204, "NO2");
    Measurement m10("sensor2", date,3.0, "SO2");
    Measurement m11("sensor2", date,4.0, "PM10");

    data.addMeasurements(m8);data.addMeasurements(m9);data.addMeasurements(m10);data.addMeasurements(m11);

    testCalculIndiceAtmoOneSensor(data);
    testCalculIndiceAtmoInAZone(data);
    testRankSensor(data);
    testLectureFichier();

    cout << "Tous les tests sont passes." << endl;

    return 0;
}


void testCalculIndiceAtmoOneSensor(Data data)
{
    cout << "*********Enter in test calculIndiceAtmo for one sensor : *********" << endl;
    Date date(20,1,2021);
    assert(data.calculerIndiceAtmo("sensor0", date, 10)==1);
    cout << "Test 1 : passed" << endl;
    assert(data.calculerIndiceAtmo("sensor1", date, 10)==2);
    cout << "Test 2 : passed" << endl;
    assert(data.calculerIndiceAtmo("sensor2", date, 10)==8);
    cout << "Test 3 : passed" << endl;
    assert(data.calculerIndiceAtmo("sensor8", date, 10)==-1); //test avec un sensor qui n'existe pas
    cout << "Test 4 : passed"<< endl;
}

void testCalculIndiceAtmoInAZone(Data data)
{
    cout << "*********Enter in test calculIndiceAtmo for one zone: *********" << endl;
    Date date(20,1,2021);
    Coordonnees coord(0.0, 0.0);
    assert(data.calculerIndiceAtmo(coord, 0.5,date, 10)==2);
    cout << "Test 1 : passed" << endl;
    
    Coordonnees coord2(10.0, 10.0); 
    assert(data.calculerIndiceAtmo(coord2,0.5, date, 10) ==-1); // test : Aucun capteur dans cette zone
    cout << "Test 2 : passed" << endl;

}

void testRankSensor(Data data)
{
    cout << "*********Enter in test rank sensor for one zone: *********" << endl;
    Date date(20,1,2021);
    vector<pair<string, int>> v = data.rankSensors("sensor0", date, 10);

    assert(v.at(0).first == "sensor0");
    assert(v.at(1).first == "sensor1");
    assert(v.at(2).first == "sensor2");

    cout << "Test 1 : passed" << endl;
}


void testLectureFichier()
{
    Data data;

    cout << "*********Enter in test lecture fichiers sensorsTest.csv : *********" << endl;

    data.initMeasurements("./dataset/measurementsTest.csv");
    data.initSensors("./dataset/sensorsTest.csv");

    //Lecture sensors
    
    assert(data.getSensors().at(0).getId() == "Sensor0");
    assert(data.getSensors().at(1).getId() == "Sensor1");

    cout << "Test 1 : passed" << endl;

    assert(data.getSensors().at(0).getCoordonnees().GetLatitude() == 44.0);
    assert(data.getSensors().at(0).getCoordonnees().GetLongitude() == -1.0);
    assert(data.getSensors().at(1).getCoordonnees().GetLatitude() == 44.0);
    assert(data.getSensors().at(1).getCoordonnees().GetLongitude() <= -0.3 and data.getSensors().at(1).getCoordonnees().GetLongitude() >= -0.31);

    cout << "Test 2 : passed" << endl;


    //Lecture measurements
    cout << "*********Enter in test lecture fichiers measurementsTest.csv : *********" << endl;
    Date d(1,1,2019);
    assert(data.getMeasurements().at(0).getDate() == d);
    assert(data.getMeasurements().at(1).getDate() == d);

    cout << "Test 1 : passed" << endl;

    assert(data.getMeasurements().at(0).getSensorId() == "Sensor0");
    assert(data.getMeasurements().at(1).getSensorId() == "Sensor1");

    cout << "Test 2 : passed" << endl;

    assert(data.getMeasurements().at(0).getAttributeId() == "O3");
    assert(data.getMeasurements().at(1).getAttributeId() == "O3");

    cout << "Test 3 : passed" << endl;

    assert(data.getMeasurements().at(0).getValue() == 50.25);
    assert(data.getMeasurements().at(1).getValue() == 63.04);

    cout << "Test 4 : passed" << endl;
}