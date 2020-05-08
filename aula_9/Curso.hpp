#ifndef CURSO_H
#define CURSO_H

#include <string>

class Curso{
    public:
        Curso(std::string nome, unsigned short cargaHorariaMinima, unsigned int anoCriacao);

        std::string getNomeCurso();
        void setNomeCurso(std::string nome);

        unsigned short getCargaHorariaMinima();
        void setCargaHoraria(unsigned int cargaHorariaMinima);

        unsigned short getAnoCriacao();
        void setAnoCriacao(unsigned short anoCriacao);

        void imprimeDados();
    private:
        std::string nome;
        unsigned int cargaHoraririaMinima;
        unsigned short anoCriacao;
};

#endif