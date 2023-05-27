/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Mar/2016
*/

#include <iostream>
#include "a02ex00.hpp"

using namespace std;

const string Information::institution = "Unicamp - Universidade Estadual de Campinas";
const string Information::dept        = "FT - Faculdade de Tecnologia";
const string Information::author      = "Prof. Dr. Andre F. de Angelis";
const string Information::date        = "Mar/2016";
const string Information::decoration  = "!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n";

const string Information::getInstitution() { return (institution); };
const string Information::getDept()        { return (dept);        };
const string Information::getAuthor()      { return (author);      };
const string Information::getDate()        { return (date);        };

const void Information::wellcome()
   {
   wellcome("");
   };

const void Information::wellcome(string message)
   {
   wellcome(message, false);
   };
   
const void Information::wellcome(string message, bool shortMessage)
   {
   if(!shortMessage)
      {
      cout << decoration;
      cout << Information::getInstitution() << "\n" << Information::getDept() << "\n";
      cout << Information::getAuthor() << "\n" << Information::getDate() << "\n";
      };
   cout << decoration;
   cout << message << endl;
   };
   
const void Information::bye()
   {
   cout << decoration;
   cout << Information::getInstitution() << " - " << Information::getDept() << endl;
   cout << decoration;
   cout << "Mission accomplished! \n";
   cout << decoration;
   cout << "\n\n" << endl;
   };

const void Information::bye(bool shortMessage)
   {
   if(shortMessage)
      {
      cout << "Mission accomplished! \n" << endl;
      }
   else
      {
      bye();
      };
   };
   
/* fim de arquivo */