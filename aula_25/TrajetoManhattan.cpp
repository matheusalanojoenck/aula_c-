#include "TrajetoManhattan.hpp"

#include <cmath>

double TrajetoManhattan::calcularDistanciaPontos(const Ponto* const p1, const Ponto* const p2) const{
	return std::abs(p1->getCoordX() - p2->getCoordX()) + std::abs(p1->getCoordY() - p2->getCoordY());
}
