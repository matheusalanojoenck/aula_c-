#ifndef CIRCULO_HPP
#define CIRCULO_HPP

#include "Forma.hpp"

class Circulo : public Forma
{
private:
    float raio;
public:
    Circulo(float raio);
    float getArea();
};
#endif