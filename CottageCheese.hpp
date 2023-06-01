#ifndef COTTAGE_CHESSE_H
#define COTTAGE_CHEESE_H

#include <string>
#include "a02ex03_b.hpp" // Classe Food
#include "Cheese.hpp"

using namespace std;

class CottageCheese : public Cheese {
    private:
        string marca;
    
    public:
        CottageCheese(string, float, float, double);
        virtual string getDescricao();
};

#endif