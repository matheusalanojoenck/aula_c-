#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"
#include "ConteudoMinistrado.hpp"
#include "Retangulo.hpp"

int main(){
	// ConteudoMinistrado c1{"Ponteiros", 4};
	// ConteudoMinistrado c2{"Referencias", 2};

	// std::cout << c1.getId() << std::endl;
	// std::cout << c2.getId() << std::endl;

	Disciplina* d1{new Disciplina{"C++"}};
	d1->adicionarConteudoMinistrado("Ponteiros", 4);
	d1->adicionarConteudoMinistrado("Referencias", 2);

	std::cout << "------Lista completa-----" << std::endl;
	d1->imprimirConteudosMinistrados();

	d1->removeConteudoMinistrado(0);

	std::cout << "------Lista apos remover Id 0------" << std::endl;
	d1->imprimirConteudosMinistrados();

	d1->limparConteudos();

	std::cout << std::endl << "------Retangulos------" << std::endl;
	Retangulo r1{2, 3};
	Retangulo r2;
	std::cout << "Retangulos criados: " << Retangulo::contador << std::endl;

	return 0;
}
