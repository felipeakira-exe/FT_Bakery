/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_c.hpp"

using namespace std;

Pao::Pao(string tipo, float peso, double valor) : Comida(valor)
   {
   this->tipo = tipo;
   this->peso = peso;
   };
   
string Pao::getDescricao()
   { 
   return ("Pao " + tipo + " - " + to_string(peso) + " Kg."); 
   };
   
/* fim de arquivo */