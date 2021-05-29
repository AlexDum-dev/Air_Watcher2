#include <iostream>
#include "./Model/Data.h"
#include "./Model/Date.h"


using namespace std;

int main()
{
    Data data;

    /*
    data.initSensors("./dataset/sensors.csv");
    cout << data.getSensors().at(0).getId() << endl;
    */

   Date * date = new Date(20,1,2021);

   //Date * date2;
   //*date2 = *date;

   *date += 60;

   /*
   Date * date3 = new Date(25,1,2020);

   if(*(date3) >= (*date2) && (*date3) <= (*date))
    cout << "Super" << endl;
    */
   cout << (*date) << endl;

   


    

    return 0;
}
