#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main(){

	Curso curso{"BCC"};
	curso.setAnoCriacao(2019);
	curso.setCargaHoraria(1000);

	Pessoa* p1{new Pessoa{"Joao", 20}};
	Disciplina disciplina{"C++", curso};
	disciplina.setProfessor(p1);
	disciplina.setCargaHoraria(72);

	std::string cabecalho = "Dados da disciplina";
	unsigned int cargaHorariaTotal = curso.getCargaHorariaMinima();
	disciplina.imprimeDados(cabecalho, cargaHorariaTotal);

	delete p1;

	return 0;
}
