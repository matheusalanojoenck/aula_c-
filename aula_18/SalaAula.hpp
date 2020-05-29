#ifndef SALA_AULA_H
#define SALA_AULA_H

#include <string>
#include <list>

#include "Disciplina.hpp"


class SalaAula{
		friend void Disciplina::setSalaAula(SalaAula* salaAula);
	public:
		SalaAula(const std::string& nome, unsigned int capacidade);
		~SalaAula();
		
		const std::string& getNome() const;
		void setNome(const std::string& nome);

		unsigned int getCapacidade() const;
		void setCapcidade(unsigned int capacidade);

		const std::list<Disciplina*>& getDisciplinas() const;
	private:
		void adicionarDisciplina(Disciplina* disciplina);
		void removerDisciplina(Disciplina* disciplina);

		std::string nome;
		unsigned int capacidade;
		std::list<Disciplina*> disciplinasMinistradas;
};
#endif
