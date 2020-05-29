#include <iostream>
#include <list>

#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "SalaAula.hpp"
#include "Console.hpp"

int main()
{
	Disciplina d{"C++"};
	Pessoa p1{"Joao"};
	d.setProfessor(&p1);

	Pessoa p2{"Maria"};
	Pessoa p3{"Pedro"};

	SalaAula sala{"F201", 30};
	
	d.setSalaAula(&sala);
	d.adicionarAluno(&p2);
	d.adicionarAluno(&p3);
	d.adicionarConteudoMinistrado("CONST", 2);

	Console console;
	console.imprimirDadosDisciplina(d);

	return 0;
}