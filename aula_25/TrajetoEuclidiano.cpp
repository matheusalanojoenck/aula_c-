#include "TrajetoEuclidiano.hpp"

#include <cmath>

double TrajetoEuclidiano::calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const{
	double dx = p1->getCoordX() - p2->getCoordX();
	double dy = p1->getCoordY() - p2->getCoordY();

	return std::sqrt(dx*dx + dy*dy);
}

