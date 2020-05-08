#ifndef PESSOA_H
#define PESSOA_H

#include<string>

class Pessoa{
	public:
		Pessoa();

		Pessoa(std::string nome);

		Pessoa(std::string nome, unsigned short int idade);

		Pessoa(std::string nome, unsigned short int idade, unsigned long cpf);

		unsigned short int getIdade();
		void setIdade(unsigned short int idade);

		std::string getNome();
		void setNome(std::string idade);

		unsigned long getCpf();
		bool setCpf(unsigned long cpf);

		void imprimeDados();
	private:
		bool validarCPF(unsigned long cpf);

		std::string nome;
		unsigned long cpf;
		unsigned char idade;
};

#endif
