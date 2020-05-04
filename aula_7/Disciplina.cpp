#include "Disciplina.hpp"
#include "Pessoa.hpp"

Disciplina::Disciplina(std::string nomeDisciplina)
	:nome{nomeDisciplina} {
}

Pessoa* Disciplina::getVetorAlunos(){
	return alunos;
}

bool Disciplina::adicionarAluno(Pessoa* aluno){
	if(index >= 50){
		return false;
	} else{
		alunos[index] = *aluno;
		index++;
		return true;
	}
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