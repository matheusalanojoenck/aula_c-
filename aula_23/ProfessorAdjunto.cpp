#include "ProfessorAdjunto.hpp"


unsigned int ProfessorAdjunto::getSalario() const
{
    return 4.5 * getValorHora() * getCargaHoraria() * 1.1;
}