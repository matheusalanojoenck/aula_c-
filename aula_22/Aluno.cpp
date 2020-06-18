#include "Aluno.hpp"

Aluno::Aluno(const std::string &nome, const unsigned long cpf)
    : Pessoa(nome, cpf), matricula{cpf}
{
}

Aluno::~Aluno()
{
    
}

const unsigned long Aluno::getMatricula()
{
    return matricula;
}

void Aluno::setMatricula(const unsigned long matricula)
{
    this->matricula = matricula;
}