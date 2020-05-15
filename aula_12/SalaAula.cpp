#include <iostream>
#include "SalaAula.hpp"

SalaAula::SalaAula(std::string nome, unsigned int capacidade)
	:nome{nome}, capacidade{capacidade}{
}

void SalaAula::adicionarDisciplina(Disciplina* disciplina){
	disciplinasMinistradas.push_back(disciplina);
}

void SalaAula::removerDisciplina(Disciplina* disciplina){
	disciplinasMinistradas.remove(disciplina);
}

std::list<Disciplina*>& SalaAula::getDisciplina(){
	return disciplinasMinistradas;
}

    
std::string SalaAula::getNome(){
	return nome;
}

void SalaAula::setNome(std::string nome){
	this->nome = nome;
}

unsigned int SalaAula::getCapacidade(){
	return capacidade;
}

void SalaAula::setCapcidade(unsigned int capacidade){
	this->capacidade = capacidade;
}

void SalaAula::mostraSalas(){

	if(disciplinasMinistradas.empty()){
		std::cout << "disciplinasMinistradas vazio" << std::endl;
	}

	std::list<Disciplina*>::iterator it;

	for(it = disciplinasMinistradas.begin(); it != disciplinasMinistradas.end(); it++){
		std::cout << (*it)->getNome() << std::endl;
	}
}