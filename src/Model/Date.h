#ifndef DATE_H
#define DATE_H

#include <iostream>
#include <fstream>
using namespace std;


//------------------------------------------------------------------------
// Rôle de la classe <Date>
// Créer une instance Date et la gérer par les méthodes
//
//------------------------------------------------------------------------


class Date
{
//----------------------------------------------------------------- Méthodes amies
   friend ostream &operator<<(ostream &, const Date &);

   friend bool operator<(Date const &d1, Date const &d2);
  
   friend bool operator==(Date const &d1, Date const &d2);
   
   friend bool operator>(Date const &d1, Date const &d2);
   
   friend bool operator<=(Date const &d1, Date const &d2);
   
   friend bool operator>=(Date const &d1, Date const &d2);
   
//----------------------------------------------------------------- PUBLIC

public:

   //----------------------------------------------------- Méthodes publiques

   //setter de date
   void setDate(int jour, int mois, int annee); 

   //surcharge d'opérateur
   Date &operator++();                  

   //surcharge d'opérateur        
   Date operator++(int);

   //surcharge d'opérateur
   const Date &operator+=(int); 

   //Méthode de test d'année bissextile
   bool anneeBissextile(int) const;

   //Méthode qui nous permet de savoir si c'est la fin de mois
   bool finMois(int) const;

   //-------------------------------------------- Constructeurs - destructeur

   // constructeur par défault
   Date(int mj = 1, int m = 1, int y = 1900);   
   

//------------------------------------------------------------------ Private
private:

   //----------------------------------------------------- Méthodes privées
   void helpIncrement();   

   //----------------------------------------------------- Private Attributes
   int jour;
   int mois;
   int annee;
   static const int jourParMois[]; // tableau de jours par mois
           

};

#endif