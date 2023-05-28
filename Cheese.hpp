#ifndef CHEESE_H
    #define CHEESE_H

#include <string>
#include "a02ex03_b.hpp" // Classe Food

using namespace std;

class Cheese : public Food {
    protected:
        float gordura;
        float peso;

    public:
        Cheese(float, float, double);
        virtual string getDescricao();
};

#endif