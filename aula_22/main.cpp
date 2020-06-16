#include <iostream>

#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include "Professor.hpp"

int main(){
	Professor p{"Maria", 11111111111, 6000, 40};

	std::cout << p.getNome() << " " << p.getSalario() << " " << p.getIdade() << std::endl;

	return 0;
}
