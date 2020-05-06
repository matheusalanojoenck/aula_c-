#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){

	int v = 20;
	int& ref{v};
	std::cout << ref << std::endl;
	v = 30;
	std::cout << ref << std::endl;


	Pessoa* p1{new Pessoa{"Joao", 20}};
	Disciplina disciplina{"C++"};
	disciplina.setProfessor(p1);
	disciplina.setCargaHoraria(72);

	std::string cabecalho = "Dados da disciplina";
	unsigned int cargaHorariaTotal = 3000;
	disciplina.imprimeDados(cabecalho,
	cargaHorariaTotal);

	delete p1;

	return 0;
}
