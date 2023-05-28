#include <string>
#include "a02ex03_b.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(float gordura, float peso, double valor) : Food(valor) {
    this->gordura = gordura;
    this->peso = peso;
}

string Cheese::getDescricao() {
    return ("Queijo com " + to_string(gordura) + "%% de teor de gordura, e " + to_string(peso) + " Kg.");
}