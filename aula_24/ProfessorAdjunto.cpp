#include "ProfessorAdjunto.hpp"

#include <iostream>

ProfessorAdjunto::~ProfessorAdjunto()
{
	std::cout << "Destrutor ProfessorAdjunto" << std::endl;
}

unsigned int ProfessorAdjunto::getSalario() const
{
	return Professor::getSalario() * 1.1;
}
