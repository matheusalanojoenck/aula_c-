#ifndef ALUNO_HPP
#define ALUNO_HPP

#include "Pessoa.hpp"

class Aluno : public Pessoa
{
public:
    Aluno(const std::string &nome, const unsigned long cpf);
    ~Aluno();

    const unsigned long getMatricula();
    void setMatricula(const unsigned long matricula);

private:
    unsigned long matricula;
};
#endif