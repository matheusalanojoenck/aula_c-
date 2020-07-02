#ifndef EUCLIDIANA_HPP
#define EUCLIDIANA_HPP

#include "Trajeto.hpp"

class Euclidiana : public Trajeto
{
public:
    using Trajeto::Trajeto;
    virtual ~Euclidiana();
    virtual double calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2);
};

#endif