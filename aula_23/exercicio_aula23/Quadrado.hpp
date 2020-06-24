#ifndef QUADRADO_HPP
#define QUADRADO_HPP

#include "Forma.hpp"

class Quadrado : public Forma
{
private:
    float lado;

public:
    Quadrado(float lado);
    float getArea();
};
#endif