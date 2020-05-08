#include "Disciplina.hpp"
#include "Pessoa.hpp"
#include <iostream>

Disciplina::Disciplina(std::string nome, Curso& curso, unsigned short cargaHoraria, Pessoa* professor)
	:nome{nome}, curso{curso}, cargaHoraria{cargaHoraria}, professor{professor}{
}

Pessoa** Disciplina::getVetorAlunos(){
	return alunos;
}

bool Disciplina::adicionarAluno(Pessoa* aluno){
	if(numAlunos >= 50){
		return false;
	} else{
		alunos[numAlunos] = aluno;
		numAlunos++;
		return true;
	}
}

unsigned int Disciplina::getNumAlunos(){
	return numAlunos;
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

void Disciplina::imprimeDados(){
	double pctCurso = (double)cargaHoraria/curso.getCargaHorariaMinima();
	pctCurso = pctCurso * 100;

	std::cout << "Nome: " << nome << std::endl;
	std::cout << "Carga Horaria: " << cargaHoraria << std::endl;
	std::cout << "Pct do curso: " << pctCurso << "%" << std::endl;
	std::cout << "Professor: " << professor->getNome() << std::endl;
}