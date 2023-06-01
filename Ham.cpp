#include <string>
#include "a02ex03_b.hpp"
#include "Ham.hpp"
using namespace std;

Ham::Ham(float peso, double valor) : Food(valor) {
    this->peso = peso;
}



string Ham::getDescricao() {
    return ("Presunto com " + to_string(peso) + " Kg.");
}