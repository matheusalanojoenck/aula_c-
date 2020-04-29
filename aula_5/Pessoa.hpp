#ifndef PESSOA_H
#define PESSOA_H

#include <string>

class Pessoa
{
public:
	Pessoa();
	Pessoa(std::string nomePessoa, unsigned short int idadePessoa);
	Pessoa(std::string nomePessoa, unsigned short int idadePessoa, unsigned long cpfPessoa);

	unsigned short int getIdade();
	void setIdade(unsigned short int novaIdade);

	std::string getNome();
	void setNome(std::string novoNome);

	unsigned long getCpf();
	void setCpf(unsigned long novoCpf);

private:
	bool validarCPF(unsigned long cpfTeste);

	std::string nome;
	unsigned char idade;
	unsigned long cpf;
};

#endif
