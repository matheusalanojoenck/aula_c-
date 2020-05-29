#ifndef PESSOA_H
#define PESSOA_H

#include<string>

class Pessoa{
	public:
		Pessoa();

		Pessoa(const std::string& nome);

		Pessoa(const std::string& nome, unsigned short int idade);

		Pessoa(const std::string& nome, unsigned short int idade, unsigned long cpf);

		~Pessoa();

		unsigned short int getIdade() const;
		void setIdade(unsigned short int idade);

		const std::string& getNome() const;
		void setNome(const std::string& nome);

		unsigned long getCpf() const;
		void setCpf(unsigned long cpf);
		
		void imprimeEnderecoMemoria();
	private:
		bool validarCPF(unsigned long cpfTeste);

		std::string nome;
		unsigned long cpf;
		unsigned char idade;
};

#endif
