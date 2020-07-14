#include "ProfessorEngenheiro.hpp"

ProfessorEngenheiro::ProfessorEngenheiro(const std::string& nome,
                                        const unsigned long cpf,
                                        const unsigned int valorHora,
                                        const unsigned short cargaHoraria,
                                        const unsigned int numeroCrea)
                                         : Professor(nome, cpf, valorHora, cargaHoraria),
                                        Engenheiro(numeroCrea)
{

}

ProfessorEngenheiro::~ProfessorEngenheiro()
{

}

unsigned int ProfessorEngenheiro::getSalario() const
{
    return Professor::getSalario() + Engenheiro::getSalaraio();
}