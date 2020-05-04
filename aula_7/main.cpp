#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	// Pessoa p1{"Joao", 20};
	// Disciplina disciplinaCPP{"C++"};
	// disciplinaCPP.setProfessor(&p1);
	
	// p1.setNome("Pedro");
	// std::cout << disciplinaCPP.getNome() << std::endl;
	// std::cout << disciplinaCPP.getProfessor()->getNome() << std::endl;
	// std::cout << p1.getNome() << std::endl;

	// Pessoa* ptrP1{&p1};
	// std::cout << p1.getNome() << std::endl;
	// std::cout << ptrP1->getNome() << std::endl;

	Pessoa* p1{new Pessoa};
	Pessoa* p2{new Pessoa{"Joao", 30}};
	p1->setNome("Maria");
	std::cout << p1->getNome() << std::endl;
	std::cout << p2->getNome() << std::endl;

	int* vetor{new int[10]};

	for (int i = 0; i < 10; i++)
	{
		vetor[i] = i;
		std::cout << vetor[i] << std::endl;
	}

	delete p1;
	delete p2;
	delete[] vetor;
	

	return 0;
}
