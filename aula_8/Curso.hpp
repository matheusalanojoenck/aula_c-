#ifndef CURSO_H
#define CURSO_H

#include <string>

class Curso{
    private:
        std::string nomeCurso;
        unsigned short cargaHoraririaMinima;
        unsigned short anoCriacao;

    public:
        Curso(std::string novoNomeCurso);

        std::string getNomeCurso();
        void setNomeCurso(std::string novoNomeCurso);

        unsigned short getCargaHorariaMinima();
        void setCargaHoraria(unsigned short novaCargaHorariaMinima);

        unsigned short getAnoCriacao();
        void setAnoCriacao(unsigned short novoAnoCriacao);
};

#endif