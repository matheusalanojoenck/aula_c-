#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main(){

	
	Pessoa* p1{new Pessoa{"Matheus"}};
	Curso curso{"BCC", 4000, 2020};
	Disciplina* d1{new Disciplina{"C++", 72, p1}};
	Disciplina* d2{new Disciplina{"MDI", 72, p1}};
	Disciplina* d3{new Disciplina{"CDI", 72, p1}};

	curso.adicionarDisciplina(d1);
	curso.adicionarDisciplina(d2);
	curso.adicionarDisciplina(d3);

	std::cout << "Lista completa de Disciplinas" << std::endl;
	curso.imprimeDisciplinas();

	curso.removerDisciplina(d2);

	std::cout << "Lista de Disciplinas spos remocao" << std::endl;
	curso.imprimeDisciplinas();

	return 0;
}
