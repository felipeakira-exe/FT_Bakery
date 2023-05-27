/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

Comida::Comida(double valor)
   {
   this->valor = valor;
   };
   
double Comida::getValor()
   { 
   return (valor); 
   };
   
/* fim de arquivo */