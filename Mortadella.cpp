#include "Mortadella.hpp"
#include "a02ex03_b.hpp"

Mortadella::Mortadella(float peso, double valor) : Food(valor) {
    this->peso = peso;
}

string Mortadella::getDescricao() {
    return "Mortadela com " + to_string(peso) + " Kg.";
}