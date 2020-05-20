#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "SalaAula.hpp"
#include "ConteudoMinistrado.hpp"


int main(){
	ConteudoMinistrado c1{"Ponteiros", 4};
	ConteudoMinistrado c2{"Referencias", 2};

	//ConteudoMinistrado::proxId++;
	std::cout << c1.getId() << std::endl;
	std::cout << c2.getId() << std::endl;


	return 0;
}
