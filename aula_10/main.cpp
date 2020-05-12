#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main(){

	
	Pessoa* p1{new Pessoa{"Matheus"}};
	Curso curso{"BCC", 4000, 2020};
	Disciplina disciplina{"C++", curso, 72, p1};

	Pessoa* p2{new Pessoa{"Maria", 23, 11111111111}};
	Pessoa* p3{new Pessoa{"Pedro", 20, 22222222222}};
	Pessoa* p4{new Pessoa{"Mario", 21, 33333333333}};

	disciplina.adicionarAluno(p2);
	disciplina.adicionarAluno(p3);
	disciplina.adicionarAluno(p4);

	std::cout << "Lista completa de alunos" << std::endl;
	disciplina.imprimeAlunos();

	disciplina.removeAluno(p2);

	std::cout << std::endl << "Lista de alunos apos remover um aluno" << std::endl;
	disciplina.imprimeAlunos();

	disciplina.removeAluno(33333333333);

	std::cout << std::endl << "Lista de alunos apos remover um aluno pelo cpf" << std::endl;
	disciplina.imprimeAlunos();

	return 0;
}
