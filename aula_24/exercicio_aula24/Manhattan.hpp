#ifndef MANHATTAN_HPP
#define MANHATTAN_HPP

#include "Trajeto.hpp"

class Manhattan : public Trajeto
{
public:
    using Trajeto::Trajeto;
    virtual ~Manhattan();
    virtual double calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const;
};

#endif