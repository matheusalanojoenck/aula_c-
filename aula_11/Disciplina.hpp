#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"

class Disciplina{
	public:
		Disciplina(std::string nome, unsigned short cargaHoraria, Pessoa* professor);

		std::string getNome();
		void setNome(std::string nome);
		
		int getCargaHoraria();
		void setCargaHoraria(unsigned short cargaHoraria);

		Pessoa* getProfessor();
		void setProfessor(Pessoa* professor);

		std::string getNomeProfessor();

		bool adicionarAluno(Pessoa* aluno);
		void removeAluno(Pessoa* aluno);
		void removeAluno(unsigned long cpf);

		std::list<Pessoa*> getVetorAlunos();

		void imprimeAlunos();
		void imprimeDados();

	private:
		std::string nome;
		unsigned short cargaHoraria;
		Pessoa* professor;
		std::list<Pessoa*> alunos;
};
#endif
