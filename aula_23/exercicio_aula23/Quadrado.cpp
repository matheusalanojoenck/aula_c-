#include "Quadrado.hpp"

Quadrado::Quadrado(float lado)
    : Forma(),  lado{lado}
{
}

float Quadrado::getArea()
{
    return lado * lado;
}