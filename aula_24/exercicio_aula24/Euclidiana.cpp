#include "Euclidiana.hpp"
#include <math.h>
#include <iostream>

Euclidiana::~Euclidiana()
{
}

double Euclidiana::calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2)
{   
    double x1 = p1->getCoordX();
    double y1 = p1->getCoordY();
    double x2 = p2->getCoordX();
    double y2 = p2->getCoordY();

    std::cout << "Euclidiana" << std::endl;

    return sqrt(pow((x1-x2),2)+pow((y1-y2),2));
}