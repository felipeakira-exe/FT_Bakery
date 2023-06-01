#include <string>
#include "a02ex03_b.hpp"       // Classe Food
#include "Cheese.hpp"          // Classe Cheese
#include "CottageCheese.hpp"   //Arquivo HPP

using namespace std;

CottageCheese::CottageCheese(string marca, float gordura, float peso, double valor) : Cheese(gordura, peso, valor) {
    this->marca = marca;
}

string CottageCheese::getDescricao() {
    return ("Queijo Cottage. Marca: " + marca + ". Teor de gordura: " + to_string(gordura) + "%%. " + to_string(peso) + " Kg.");
}
