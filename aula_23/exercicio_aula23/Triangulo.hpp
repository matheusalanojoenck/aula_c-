#ifndef TRIANGULO_HPP
#define TRIANGULO_HPP

#include "Forma.hpp"

class Triangulo : public Forma
{
private:
    float base;
    float altura;

public:
    Triangulo(float base, float altura);
    float getArea();
};
#endif