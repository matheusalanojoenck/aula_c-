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

	dis1.setSalaAula(&sala);

	std::cout << dis1.getSalaAula() << std::endl;

	return 0;
}
