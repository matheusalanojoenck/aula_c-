#include "Disciplina.hpp"
#include <iostream>

Disciplina::Disciplina(std::string nome, unsigned short cargaHoraria, Pessoa* professor)
	:nome{nome}, cargaHoraria{cargaHoraria}, professor{professor}{
}

std::list<Pessoa*> Disciplina::getVetorAlunos(){
	return alunos;
}

bool Disciplina::adicionarAluno(Pessoa* aluno){
	std::list<Pessoa*>::iterator it;
	/**
	 * Checando se aluno ja foi cadastrado, comparando CPF dos alunos cadastros 
	 * retorna false caso ja haja um estudante com o mesmo cpf
	 * retorna true se a inserção do aluno ocorrer normalmente
	 */
	for (it = alunos.begin(); it != alunos.end(); it++)
	{
		if(aluno->getCpf() == (*it)->getCpf()){
			return false;
		}
	}
	alunos.push_back(aluno);
	return true;
}

void Disciplina::removeAluno(Pessoa* aluno){	
	alunos.remove(aluno);
}

/**
 * Procura o aluno pro CPF e ao encontrar, o apaga da lista "alunos"
 */
void Disciplina::removeAluno(unsigned long cpf){
	std::list<Pessoa*>::iterator it;

	it = alunos.begin();
	while(it != alunos.end()){
		if((*it)->getCpf() == cpf){
			it = alunos.erase(it);
		}else{
			it++;
		}
	}
}

Pessoa* Disciplina::getProfessor(){
	return professor;
}

void Disciplina::setProfessor(Pessoa* professor){
	this->professor = professor;
}

std::string Disciplina::getNomeProfessor(){
	return professor->getNome();
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned short cargaHoraria){
	this->cargaHoraria = cargaHoraria;
}

void Disciplina::imprimeAlunos(){
	std::list<Pessoa*>::iterator it;
	for(it = alunos.begin(); it != alunos.end(); it++){
		std::cout << (*it)->getNome() << std::endl;
	}
}

void Disciplina::imprimeDados(){
	//double pctCurso = (double)cargaHoraria/curso.getCargaHorariaMinima();
	//pctCurso = pctCurso * 100;

	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Carga Horaria: " << cargaHoraria << std::endl;
	//std::cout << "Pct do curso: " << pctCurso << "%" << std::endl;
	std::cout << "Professor: " << professor->getNome() << std::endl;
}