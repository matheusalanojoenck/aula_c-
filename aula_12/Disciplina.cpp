#include "Disciplina.hpp"
#include "SalaAula.hpp"

#include<iostream>

Disciplina::Disciplina(std::string nome)
	:nome{nome} {
}

void Disciplina::adicionarAluno(Pessoa* aluno){
	this->alunos.push_back(aluno);
}

void Disciplina::removerAluno(Pessoa* aluno){
	this->alunos.remove(aluno);
}

SalaAula* Disciplina::getSalaAula(){
	return salaAula;
}

void Disciplina::setSalaAula(SalaAula* salaAula){
	this->salaAula = salaAula;
}

void Disciplina::removerAluno(unsigned long cpf){
	std::list<Pessoa*>::iterator it;

	for(it = this->alunos.begin(); it != this->alunos.end(); it++)
		if((*it)->getCpf() == cpf)
			break;
	if(it != this->alunos.end())
		alunos.erase(it);
}

std::list<Pessoa*>& Disciplina::getAlunos(){//retornamos uma referência para a lista, o que custa mais barato
	return alunos;
}

std::string Disciplina::getNome(){
	return this->nome;
}

void Disciplina::setNome(std::string nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria(){
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int cargaHoraria){
	this->cargaHoraria = cargaHoraria;
}

Pessoa* Disciplina::getProfessor(){
	return this->professor;
}

void Disciplina::setProfessor(Pessoa* professor){
	this->professor = professor;
}

void Disciplina::imprimeDados(std::string& cabecalho, unsigned int& cargaTotalCurso){
	double pctCurso = (double)cargaHoraria/cargaTotalCurso;
	pctCurso = pctCurso * 100;
	std::cout << cabecalho << std::endl;
	std::cout << "Disciplina: " << this->nome << std::endl;
	std::cout << "Carga: " << this->cargaHoraria << std::endl;
	std::cout << "Percentagem do curso: " << pctCurso << "%" << std::endl;
	std::cout << "Professor: " << this->professor->getNome() << std::endl;

}
