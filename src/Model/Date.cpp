//---------------------------------------------------------------- INCLUDE

//-------------------------------------------------------- Include personnel
#include "Date.h"

//------------------------------------------------------------- Constantes

//tableau de jours par mois
const int Date::jourParMois[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

//-------------------------------------------- Constructeurs - destructeur

// Constructor
Date::Date(int j, int m, int y)
{
    setDate(j, m, y);
} 


//----------------------------------------------------------------- PUBLIC

//----------------------------------------------------- Méthodes publiques

//surcharge d'opérateurs
Date &Date::operator++()
{
    helpIncrement(); 
    return *this;    
}

//surcharge d'opérateurs
Date Date::operator++(int)
{
    Date temp = *this; 
    helpIncrement();

    return temp;
} 

//surcharge d'opérateurs
const Date &Date::operator+=(int additionalDays)
{
    for (int i = 0; i < additionalDays; i++)
        helpIncrement();

    return *this;
}

// setter de jour, mois et année
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

// Test d'année bissextile
bool Date::anneeBissextile(int testYear) const
{
    if (testYear % 400 == 0 ||
        (testYear % 100 != 0 && testYear % 4 == 0))
        return true; 
    else
        return false;
}

// Méthode qui determine si un certain jour est le dernier du mois
bool Date::finMois(int testDay) const
{
    if (mois == 2 && anneeBissextile(annee))
        return testDay == 29; // Dernier jour de fevrier pendant une année bissextile
    else
        return testDay == jourParMois[mois];
} 

// Méthode pour aider l'incrémentation de la date
void Date::helpIncrement()
{
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

//------------------------------------------------- Surcharge d'opérateurs


ostream &operator<<(ostream &output, const Date &d)
{
    static char *monthName[13] = {(char*)"", (char*)"Janvier", (char*)"Fevrier",
                                  (char*)"Mars", (char*)"Avril", (char*)"Mai", (char*)"Juin", (char*)"Juillet", (char*)"Aout",
                                  (char*)"Septembre", (char*)"Octobre", (char*)"Novembre", (char*)"Decembre"};
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

