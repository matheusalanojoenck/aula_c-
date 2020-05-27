#include <iostream>
#include <string>
#include <list>

#include "Disciplina.hpp"
#include "SalaAula.hpp"
#include "ConteudoMinistrado.hpp"

int main(){
	const Pessoa p{"joao", 20, 11111111111};
	const int valor{1};

	std::cout << p.getNome() << std::endl;

	return 0;
}
