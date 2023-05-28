/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

Food::Food(double valor)
   {
   this->valor = valor;
   };
   
double Food::getValor()
   { 
   return (valor); 
   };
   
/* fim de arquivo */