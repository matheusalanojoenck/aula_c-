#include "Triangulo.hpp"

Triangulo::Triangulo(float base, float altura)
    :Forma(),  base{base}, altura{altura}
{
}

float Triangulo::getArea()
{
    return (base * altura) / 2;
}