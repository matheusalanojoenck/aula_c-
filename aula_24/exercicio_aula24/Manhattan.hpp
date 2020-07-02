#ifndef MANHATTAN_HPP
#define MANHATTAN_HPP

#include "Trajeto.hpp"

class Manhattan : public Trajeto
{
private:
    
public:
    Manhattan();
    virtual ~Manhattan();
    virtual double calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2);
};

#endif