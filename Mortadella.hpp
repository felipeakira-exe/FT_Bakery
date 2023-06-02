#ifndef MORTADELLA_H
#define MORTADELLA_H

#include <string>
#include "a02ex03_b.hpp"
using namespace std;

class Mortadella : public Food {
    private:
        float peso;
    
    public:
        Mortadella(float, double);
        virtual string getDescricao();
};
#endif