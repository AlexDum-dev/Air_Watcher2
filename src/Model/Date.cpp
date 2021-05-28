// Fig. 11.13: Date.cpp
// Date class member-function definitions.
#include "Date.h"

// initialize static member at file scope; one classwide copy
const int Date::jourParMois[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

// Date constructor
Date::Date(int j, int m, int y)
{
    setDate(j, m, y);
} 
// set month, day and year
void Date::setDate(int jj, int mm, int aa)
{
    mois = (mm >= 1 && mm <= 12) ? mm : 1;
    annee = (aa >= 1900 && aa <= 2100) ? aa : 1900;

    // teste pour annee bissextile
    if (mois == 2 && anneeBissextile(annee))
        jour = (jj >= 1 && jj <= 29) ? jj : 1;
    else
         jour = (jj >= 1 && jj <= jourParMois[mois]) ? jj : 1;
} 

// surcharge d'opérateur
Date &Date::operator++()
{
    helpIncrement(); 
    return *this;    
}

// surcharge d'opérateur
Date Date::operator++(int)
{
    Date temp = *this; 
    helpIncrement();

    return temp;
} 

// Ajouter un nombre spécifique de jours à une date
const Date &Date::operator+=(int additionalDays)
{
    for (int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this;
} 

// Si c'est une année bissextile on return true
bool Date::anneeBissextile(int testYear) const
{
    if (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; 
    else
        return false;
}

// determine whether the day is the last day of the month
bool Date::finMois(int testDay) const
{
    if (mois == 2 && anneeBissextile(annee))
        return testDay == 29; // last day of Feb. in leap year
    else
        return testDay == jourParMois[mois];
} 

// Fonction pour aider l'incrémentation de la date
void Date::helpIncrement()
{
    // day is not end of month
    if (!finMois(jour))
        jour++;           
    else if (mois < 12) 
    {
        mois++; 
        jour = 1; 
    }            
    else         
    {
        annee++;    
        mois = 1; 
        jour = 1;   
    }             
} 

// Surcharge d'opérateur
ostream &operator<<(ostream &output, const Date &d)
{
    static char *monthName[13] = {"", "Janvier", "Fevrier",
                                  "Mars", "Avril", "Mai", "Juin", "Juillet", "Aout",
                                  "Septembre", "Octobre", "Novembre", "Decembre"};
    output << monthName[d.mois] << ' ' << d.jour << ", " << d.annee;
    return output;
} 

bool operator<(const Date &d1, const Date &d2)
{
  if (d1.annee<d2.annee)
  {
    return true;
  } else if (d1.annee>d2.annee) {
    return false;
  } else if (d1.mois<d2.mois)
  {
    return true;
  } else if (d1.mois>d2.mois) {
    return false;
  } else if (d1.jour<d2.jour)
  {
    return true;
  } else if (d1.jour>d2.jour) {
    return false;
  } else {
    return false;
  }
}
bool operator==(Date const &d1, Date const &d2)
{
    if (d1.annee==d2.annee and d1.mois==d2.mois and d1.jour==d2.jour)
    {
        return true;
    }
    return false;
}
bool operator>(Date const &d1, Date const &d2)
{
    if (d1<d2 or d1 == d2)
    {
        return false;
    }
    return true;
}
bool operator<=(Date const &d1, Date const &d2)
{
    if (d1<d2 or d1 == d2)
    {
        return true;
    }
    return false;
}
bool operator>=(Date const &d1, Date const &d2)
{
    if (d1<d2)
    {
        return false;
    }
    return true;
}

