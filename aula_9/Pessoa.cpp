#include "Pessoa.hpp"

#include<iostream>

Pessoa::Pessoa(){
}

Pessoa::Pessoa(std::string nome)
	:nome{nome} {
}

Pessoa:: Pessoa(std::string nome, unsigned short int idade)
	:nome{nome}, idade{(unsigned char)idade} {
}

Pessoa:: Pessoa(std::string nome, unsigned short int idade, unsigned long cpf)
		: nome{nome}, idade{(unsigned char)idade} {
	if(validarCPF(cpf))
		this->cpf = cpf;
	else
		cpf = 0;
}

std::string Pessoa::getNome(){
	return nome;
}

void Pessoa::setNome(std::string nome){
	this->nome = nome;
}

unsigned long Pessoa::getCpf(){
	return cpf;
}

bool Pessoa::setCpf(unsigned long cpf){
	if(validarCPF(cpf)){
		this->cpf = cpf;
		return true;
	}
	return false;
}

unsigned short int Pessoa::getIdade(){
	return idade;
}

void Pessoa::setIdade(unsigned short int idade){
	this->idade = (unsigned char) idade;
}

bool Pessoa::validarCPF(unsigned long cpf){
	int somatorioValidaUltimo;
	int modulo;
	int somatorioValidaPenultimo = 0;
	int ultimo = cpf%10;
	cpf = cpf/10;
	int penultimo = cpf%10;
	cpf = cpf/10;
	
	somatorioValidaUltimo = penultimo*2;
	for(int i=2; i <= 11; i++){
		modulo = cpf%10;
		cpf = cpf/10;
		somatorioValidaPenultimo += modulo*i;
		somatorioValidaUltimo += modulo*(i+1);
	}
	modulo = somatorioValidaPenultimo%11;
	if(modulo < 2){
		if(!penultimo)
			return false;//cpf invalido
	}else{
		if(penultimo != 11 - modulo)
			return false;//cpf invalido
	}
	modulo = somatorioValidaUltimo%11;
	if(modulo < 2){
		if(!ultimo)
			return false;//cpf invalido
	}else{
		if(ultimo != 11-modulo)
			return false;//cpf invalido
	}
	return true;//cpf valido
}

void Pessoa::imprimeDados(){
	std::cout << "Nome: " << this->nome << std::endl;
	std::cout << "Idade: " << (unsigned int)this->idade << std::endl;
	std::cout << "CPF: " << this->cpf << std::endl;
}
