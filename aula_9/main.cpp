#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main(){
	std::cout << "---Dados pessoa 1------" << std::endl;
	Pessoa* p1{new Pessoa{"Joao", 20, 11111111111}};
	p1->imprimeDados();

	std::cout << "---Dados curso------" << std::endl;
	Curso curso{"BCC", 4000, 2020};
	curso.imprimeDados();

	std::cout << "---Dados Disciplina------" << std::endl;
	Disciplina d1{"C++", curso, 72, p1};
	d1.imprimeDados();



	return 0;
}
