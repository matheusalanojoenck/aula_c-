#include "Disciplina.hpp"

#include<iostream>

#include "SalaAula.hpp"

Disciplina::Disciplina(const std::string& nome)
	:nome{nome}, cargaHoraria{0}, salaAula{nullptr}, professor{nullptr} {
}

Disciplina::~Disciplina(){
	std::cerr << "Destruindo a disciplina " << this->nome << std::endl;
	//o setSalaAula vai remover a disciplina da sala de aula antiga, caso ela exista
	this->setSalaAula(nullptr);
	std::list<const ConteudoMinistrado*>::const_iterator it;
	for(it=conteudos.begin(); it!=conteudos.end(); it++)
		delete *it;//liberando a memória de cada conteúdo
}

const std::string& Disciplina::getNome() const{
	return this->nome;
}

void Disciplina::setNome(const std::string& nome){
	this->nome = nome;
}

int Disciplina::getCargaHoraria() const{
	return this->cargaHoraria;
}

void Disciplina::setCargaHoraria(unsigned int cargaHoraria){
	this->cargaHoraria = cargaHoraria;
}

const Pessoa* Disciplina::getProfessor() const{
	return this->professor;
}

void Disciplina::setProfessor(const Pessoa* professor){
	this->professor = professor;
}

void Disciplina::adicionarAluno(const Pessoa* aluno){
	this->alunos.push_back(aluno);
}

void Disciplina::removerAluno(const Pessoa* aluno){
	this->alunos.remove(aluno);
}

void Disciplina::removerAluno(unsigned long cpf){
	std::list<const Pessoa*>::const_iterator it;

	for(it = this->alunos.begin(); it != this->alunos.end(); it++)
		if((*it)->getCpf() == cpf)
			break;
	if(it != this->alunos.end())
		alunos.erase(it);
}

const std::list<const Pessoa*>& Disciplina::getAlunos() const{//retornamos uma referência para a lista, o que custa mais barato
	return alunos;
}

void Disciplina::setSalaAula(SalaAula* salaAula){
	if(this->salaAula != nullptr)//se já existia uma sala, remover a disciplina dessa sala
		this->salaAula->removerDisciplina(this);
	this->salaAula = salaAula;
	if(this->salaAula != nullptr)
		this->salaAula->adicionarDisciplina(this);//adicionar a disciplina na nova sala
}

void Disciplina::setSalaAulaSemAtualizarSala(SalaAula* salaAula){
	//uma solução que talvez seria melhor é deixar essa função privada, e acessar em SalaAula via função amiga
	this->salaAula = salaAula;
}

const SalaAula* Disciplina::getSalaAula() const{
	return this->salaAula;
}

void Disciplina::adicionarConteudoMinistrado(const std::string& conteudo, unsigned short cargaHorariaConteudo){
	this->conteudos.push_back(new ConteudoMinistrado{conteudo, cargaHorariaConteudo});
}

const std::list<const ConteudoMinistrado*>& Disciplina::getConteudos() const{
	return conteudos;
}