#include <string>
#include "a02ex03_b.hpp"
#include "Cheese.hpp"

using namespace std;

Cheese::Cheese(string tipo, float peso, double valor) : Food(valor) {
    this->tipo = tipo;
    this->peso = peso;
}

string Cheese::getDescricao() {
    return ("Queijo " + tipo + " - " + to_string(peso) + " Kg.");
}