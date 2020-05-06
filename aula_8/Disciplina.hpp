#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>

#include "Pessoa.hpp"

class Disciplina{
	public:
		Disciplina(std::string nomeDisciplina);

		std::string getNome();
		void setNome(std::string novoNome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned int novaCarga);

		Pessoa* getProfessor();
		void setProfessor(Pessoa* novoPefrossor);

		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa* aluno);
		Pessoa** getVetorAlunos();
		unsigned int getNumAlunos();

	private:
		int numAlunos = 0;//quanos alunos foram adicionados
		Pessoa* professor;
		Pessoa* alunos[50];
		std::string nome;
		unsigned short int cargaHoraria;
};
#endif
