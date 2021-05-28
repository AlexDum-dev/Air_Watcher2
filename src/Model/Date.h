// Fig. 11.12: Date.h
// Date class definition.
#ifndef DATE_H
#define DATE_H
#include <iostream>
#include <fstream>
using namespace std;

class Date
{
   friend ostream &operator<<(ostream &, const Date &);

   friend bool operator<(Date const &d1, Date const &d2);
  
   friend bool operator==(Date const &d1, Date const &d2);
   
   friend bool operator>(Date const &d1, Date const &d2);
   
   friend bool operator<=(Date const &d1, Date const &d2);
   
   friend bool operator>=(Date const &d1, Date const &d2);
   

public:
   Date(int mj = 1, int m = 1, int y = 1900);   // constructeur par défault
   void setDate(int jour, int mois, int annee); // set jour, mois, annee
   Date &operator++();                          // prefix increment operator
   Date operator++(int);                        // postfix increment operator
   const Date &operator+=(int);                 // Ajouter des jours
   bool anneeBissextile(int) const;             // annee bissextile?
   bool finMois(int) const;                     // is date at the end of month?

private:
   int jour;
   int mois;
   int annee;
   static const int jourParMois[]; // array of days per month
   void helpIncrement();           // utility function for incrementing date

}; // end class Date

#endif