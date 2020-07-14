#include "Engenheiro.hpp"

const unsigned int Engenheiro::SALARIO_PADRAO{9405};

Engenheiro::Engenheiro(){};

Engenheiro::Engenheiro(const unsigned int numeroCrea) : numeroCrea(numeroCrea){
}

Engenheiro::~Engenheiro(){}

unsigned int Engenheiro::getNumeroCrea() const{
	return this->numeroCrea;
}

void Engenheiro::setNumeroCrea(const unsigned int numeroCrea){
	this->numeroCrea = numeroCrea;
}

unsigned int Engenheiro::getSalaraio() const
{
	return Engenheiro::SALARIO_PADRAO;
}