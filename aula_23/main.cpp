#include <iostream>

#include "Professor.hpp"
#include "ProfessorAdjunto.hpp"

int main(){
	Professor p{"Joao", 11111111111, 85, 40};
	ProfessorAdjunto p1{"Maria", 11111111111, 85, 40};

	std::cout << p.getNome() << " " << p.getSalario() << std::endl;
	std::cout << p1.getNome() << " " << p1.getSalario() << std::endl;

	return 0;
}
