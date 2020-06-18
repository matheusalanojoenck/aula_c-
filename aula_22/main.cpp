#include <iostream>

#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "Professor.hpp"
#include "Aluno.hpp"
#include "SalaAula.hpp"
#include "Console.hpp"

int main(){
	Professor p{"Maria", 11111111111, 6000, 40};
	Aluno a{"Matheus", 22222222222};

	SalaAula s{"F-201", 30};

	Disciplina d{"C++"};
	d.setProfessor(&p);
	d.adicionarAluno(&a);
	d.setSalaAula(&s);

	d.adicionarConteudoMinistrado("Herança", 2);

	Console c;
	c.imprimirDadosDisciplina(d);

	return 0;
}
