#ifndef HAM_H
#define HAM_H

#include <string>
#include "a02ex03_b.hpp"

using namespace std;

class Ham : public Food {
    private:
        float peso;
    
    public:
        Ham(float, double);
        virtual string getDescricao();
};

#endif