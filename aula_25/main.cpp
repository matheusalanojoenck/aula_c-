#include <iostream>

#include "Trajeto.hpp"
#include "TrajetoManhattan.hpp"
#include "TrajetoEuclidiano.hpp"

int main(){
	Trajeto* tm{new TrajetoManhattan};
	Trajeto* te{new TrajetoEuclidiano};

	tm->adicionarPonto(1.0, 1.0);
	tm->adicionarPonto(2.0, 2.0);
	tm->adicionarPonto(3.0, 3.0);

	te->adicionarPonto(1.0, 1.0);
	te->adicionarPonto(2.0, 2.0);
	te->adicionarPonto(3.0, 3.0);

	tm->imprimirTrajeto();
	std::cout << "Distancia Manhattan: " << tm->getDistanciaPercorrida() << std::endl;
	
	te->imprimirTrajeto();
	std::cout << "Distancia Euclidiana: " << te->getDistanciaPercorrida() << std::endl;

	delete tm;
	delete te;

	return 0;
}
