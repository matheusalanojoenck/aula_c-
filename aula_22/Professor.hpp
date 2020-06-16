#ifndef PROFESSOR_HPP
#define PROFESSOR_HPP

#include "Pessoa.hpp"

class Professor : public Pessoa
{
public:
    Professor(const std::string &nome, const unsigned long cpf, const unsigned int salario, const unsigned short cargaHoraria);
    ~Professor();

    void setSalario(const unsigned int salario);
    unsigned int getSalario() const;

    void setCargaHoraria(const unsigned short cargaHoraria);
    unsigned short getCargaHoraria() const;

private:
    unsigned int salario;
    unsigned short cargaHoraria;
};
#endif