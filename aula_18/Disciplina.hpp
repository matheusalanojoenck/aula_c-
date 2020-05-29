#ifndef DISCIPLINA_H
#define DISCIPLINA_H

#include <string>
#include <list>

#include "Pessoa.hpp"
#include "ConteudoMinistrado.hpp"
class SalaAula;//forward declaration

class Disciplina{
	public:
		Disciplina(const std::string& nome);
		~Disciplina();

		const std::string& getNome() const ;
		void setNome(const std::string& nome);
		
		int getCargaHoraria() const;
		void setCargaHoraria(unsigned int cargaHoraria);
		
		const Pessoa* getProfessor() const;
		void setProfessor(const Pessoa* professor);

		void adicionarAluno(const Pessoa* aluno);
		void removerAluno(const Pessoa* aluno);
		void removerAluno(unsigned long cpf);
		const std::list<const Pessoa*>& getAlunos() const;

		void setSalaAula(SalaAula* salaAula);
		void setSalaAulaSemAtualizarSala(SalaAula* salaAula);
		
		const SalaAula* getSalaAula() const;

		void adicionarConteudoMinistrado(const std::string& conteudo, unsigned short cargaHorariaConteudo);
		const std::list<const ConteudoMinistrado*>& getConteudos() const;
	private:
		std::string nome;
		unsigned short int cargaHoraria;
		SalaAula* salaAula;

		const Pessoa* professor;
		std::list<const Pessoa*> alunos;
		std::list<const ConteudoMinistrado*> conteudos;
};
#endif
