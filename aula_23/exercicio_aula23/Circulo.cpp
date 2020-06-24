#include "Circulo.hpp"

Circulo::Circulo(float raio)
    : Forma(), raio{raio}
{
}

float Circulo::getArea()
{
    return 3.14 * (raio * raio);
}