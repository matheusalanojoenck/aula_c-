#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"
#include "Curso.hpp"

class Disciplina{
	public:
		Disciplina(std::string nome, Curso& curso, unsigned short cargaHoraria, Pessoa* professor);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned short cargaHoraria);

		Pessoa* getProfessor();
		void setProfessor(Pessoa* professor);

		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa* aluno);
		Pessoa** getVetorAlunos();
		unsigned int getNumAlunos();
		void imprimeDados();

	private:
		std::string nome;
		Curso& curso;
		unsigned short cargaHoraria;
		Pessoa* professor;
		Pessoa* alunos[50];
		int numAlunos = 0;//quanos alunos foram adicionados
};
#endif
