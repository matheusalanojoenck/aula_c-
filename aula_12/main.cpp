#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"


int main(){
	Pessoa prof1{"João", 40};
	Disciplina dis1{"C++"};
	dis1.setProfessor(&prof1);

	Pessoa prof2{"Maria", 30};	
	Disciplina dis2{"Java"};
	dis2.setProfessor(&prof2);

	SalaAula sala{"F204", 20};

	std::cout << "Lista de disciplinas em salaAula" << std::endl; 
	sala.mostraSalas();

	dis1.setSalaAula(&sala);
	dis2.setSalaAula(&sala);

	

	std::cout << std::endl << "Lista de disciplinas em salaAula apos setSalaAula" << std::endl;
	sala.mostraSalas();

	std::cout << std::endl;
	std::cout << "Disciplina: " << dis1.getNome() << " na sala: " << dis1.getSalaAula()->getNome() << std::endl;
	std::cout << "Disciplina: " << dis2.getNome() << " na sala: " << dis2.getSalaAula()->getNome() << std::endl;



	return 0;
}
