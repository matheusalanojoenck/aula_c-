#include "Curso.hpp"

Curso::Curso(std::string novoNomeCurso){
    nomeCurso = novoNomeCurso;
}

std::string Curso::getNomeCurso(){
    return nomeCurso;
}

void Curso::setNomeCurso(std::string novoNomeCurso){
    nomeCurso= novoNomeCurso;
}

unsigned short Curso::getCargaHorariaMinima(){
    return cargaHoraririaMinima;
}

void Curso::setCargaHoraria(unsigned short novaCargaHorariaMinima){
    cargaHoraririaMinima = novaCargaHorariaMinima;
}

unsigned short Curso::getAnoCriacao(){
    return anoCriacao;
}

void Curso::setCargaHoraria(unsigned short novoAnoCriacao){
    cargaHoraririaMinima = novoAnoCriacao;
}
