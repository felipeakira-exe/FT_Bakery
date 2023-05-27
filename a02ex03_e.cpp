/* Unicamp - Universidade Estadual de Campinas
   FT - Faculdade de Tecnologia
   Limeira - SP
   Prof. Dr. Andre F. de Angelis
   Maio/2015
*/

#include <string>
#include "a02ex03_d.hpp"
#include "a02ex03_e.hpp"

using namespace std;

BolachaRecheada::BolachaRecheada(string tipo, string recheio, int unidades, double valor) : Bolacha(tipo, unidades, valor)
   {
   this->recheio = recheio;
   };
   
string BolachaRecheada::getDescricao()
   { 
   return ("Bolacha Recheada com " + recheio + " - " + Bolacha::getDescricao()); 
   };
   
/* fim de arquivo */