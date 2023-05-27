/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#ifndef A02EX03_D_H
   #define A02EX03_D_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Bolacha : public Comida
   {
   private:
      string tipo;
      int    unidades;
      
   public:
      Bolacha(string, int, double);
      virtual string getDescricao();
   };
   
#endif
   
/* fim de arquivo */