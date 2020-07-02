#include "Manhattan.hpp"
#include <iostream>
#include <cmath>

Manhattan::~Manhattan()
{
}

double Manhattan::calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2)
{
    double x1 = p1->getCoordX();
    double y1 = p1->getCoordY();
    double x2 = p2->getCoordX();
    double y2 = p2->getCoordY();

    std::cout << "Manhattan::calcularDistanciaPontos" << std::endl;
    
    return abs(x1-x2) + abs(y1 - y2);
}