#include "Disciplina.hpp"
#include "Pessoa.hpp"

Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina} {
}

Pessoa** Disciplina::getVetorAlunos(){
	return alunos;
}

bool Disciplina::adicionarAluno(Pessoa* aluno){
	if(numAlunos > 50){
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

void Disciplina::setProfessor(Pessoa* novoProfessor){
	professor = novoProfessor;
}

std::string Disciplina::getNomeProfessor(){
	return professor->getNome();
}

std::string Disciplina::getNome(){
	return nome;
}

void Disciplina::setNome(std::string novoNome){
	nome = novoNome;
}

int Disciplina::getCargaHoraria(){
	return cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int novaCarga){
	cargaHoraria = novaCarga;
}