#include <iostream>

#include "Trajeto.hpp"
#include "Euclidiana.hpp"
#include "Manhattan.hpp"

int main(){
	std::cout << "Distancia Trajeto" << std::endl;
	Trajeto* t{new Trajeto};
	t->adicionarPonto(1.0, 1.0);
	t->adicionarPonto(2.0, 2.0);
	t->adicionarPonto(3.0, 3.0);
	t->imprimirTrajeto();
	std::cout << "Distancia: " << t->getDistanciaPercorrida() << std::endl;

	std::cout << "\nDistancia Euclediana" << std::endl;
	Trajeto* e{new Euclidiana};
	e->adicionarPonto(1.0, 1.0);
	e->adicionarPonto(2.0, 2.0);
	e->adicionarPonto(3.0, 3.0);
	e->imprimirTrajeto();
	std::cout << "Distancia: " << e->getDistanciaPercorrida() << std::endl;

	std::cout << "\nDistancia Manhattan" << std::endl;
	Trajeto* m{new Manhattan};
	m->adicionarPonto(1.0, 1.0);
	m->adicionarPonto(2.0, 2.0);
	m->adicionarPonto(3.0, 3.0);
	m->imprimirTrajeto();
	std::cout << "Distancia: " << m->getDistanciaPercorrida() << std::endl;


	return 0;
}
