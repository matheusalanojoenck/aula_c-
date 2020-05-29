#include "SalaAula.hpp"

#include <iostream>

SalaAula::SalaAula(const std::string& nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade}{
}

SalaAula::~SalaAula(){
	std::cerr << "Destruindo a sala " << this->nome << std::endl;
	std::list<Disciplina*>::iterator it;
	for(it = disciplinasMinistradas.begin(); it != disciplinasMinistradas.end(); it++){
		(*it)->setSalaAulaSemAtualizarSala(nullptr);
	}
}
    
const std::string& SalaAula::getNome() const{
	return nome;
}

void SalaAula::setNome(const std::string& nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade() const{
	return capacidade;
}

void SalaAula::setCapcidade(unsigned int capacidade){
	this->capacidade = capacidade;
}

const std::list<Disciplina*>& SalaAula::getDisciplinas() const{
	return disciplinasMinistradas;
}

void SalaAula::adicionarDisciplina(Disciplina* disciplina){
	disciplinasMinistradas.push_back(disciplina);
}

void SalaAula::removerDisciplina(Disciplina* disciplina){
	disciplinasMinistradas.remove(disciplina);
}

