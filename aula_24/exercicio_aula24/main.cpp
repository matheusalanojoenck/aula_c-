#include <iostream>

#include "Trajeto.hpp"
#include "Euclidiana.hpp"
#include "Manhattan.hpp"

int main(){
	Trajeto* t{new Euclidiana};
	Trajeto* t1{new Manhattan};
	
	t1->imprimirTrajeto();

	t->adicionarPonto(1.0, 1.0);
	t->adicionarPonto(2.0, 2.0);
	t->adicionarPonto(3.0, 3.0);

	t->imprimirTrajeto();

	std::cout << "Distancia: " << t->getDistanciaPercorrida() << std::endl;

	return 0;
}
