/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_b.hpp"
#include "a02ex03_d.hpp"

using namespace std;

Cracker::Cracker(string tipo, int unidades, double valor) : Food(valor)
   {
   this->tipo     = tipo;
   this->unidades = unidades;
   };
   
string Cracker::getDescricao()
   { 
   return ("Bolacha " + tipo + " - " + to_string(unidades) + " un/pacote."); 
   };
   
/* fim de arquivo */