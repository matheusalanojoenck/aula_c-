#include <iostream>
#include <string>

#include "Pessoa.hpp"
#include "Disciplina.hpp"

int main(){
	// Pessoa p1{"Joao", 20};
	// Disciplina disciplinaCPP{"C++"};
	// disciplinaCPP.setProfessor(&p1);
	
	// p1.setNome("Pedro");
	// std::cout << disciplinaCPP.getNome() << std::endl;
	// std::cout << disciplinaCPP.getProfessor()->getNome() << std::endl;
	// std::cout << p1.getNome() << std::endl;

	// Pessoa* ptrP1{&p1};
	// std::cout << p1.getNome() << std::endl;
	// std::cout << ptrP1->getNome() << std::endl;

	// Pessoa* p1{new Pessoa};
	// Pessoa* p2{new Pessoa{"Joao", 30}};
	// p1->setNome("Maria");
	// std::cout << p1->getNome() << std::endl;
	// std::cout << p2->getNome() << std::endl;

	// int* vetor{new int[10]};

	// for (int i = 0; i < 10; i++)
	// {
	// 	vetor[i] = i;
	// 	std::cout << vetor[i] << std::endl;
	// }

	// delete p1;
	// delete p2;
	// delete[] vetor;

	Pessoa p1{"Matheus", 20, 11111111111};
	Pessoa p2{"Maria", 21, 22222222222};
	Pessoa p3{"Joao", 19, 33333333333};

	Disciplina disciplina{"C++"};
	disciplina.adicionarAluno(&p1);
	disciplina.adicionarAluno(&p2);
	disciplina.adicionarAluno(&p3);
	
	std::cout << disciplina.getVetorAlunos()[0].getNome() << std::endl;
	std::cout << disciplina.getVetorAlunos()[0].getIdade() << std::endl;
	std::cout << disciplina.getVetorAlunos()[0].getCpf() << std::endl;

	std::cout << disciplina.getVetorAlunos()[1].getNome() << std::endl;
	std::cout << disciplina.getVetorAlunos()[1].getIdade() << std::endl;
	std::cout << disciplina.getVetorAlunos()[1].getCpf() << std::endl;

	std::cout << disciplina.getVetorAlunos()[2].getNome() << std::endl;
	std::cout << disciplina.getVetorAlunos()[2].getIdade() << std::endl;
	std::cout << disciplina.getVetorAlunos()[2].getCpf() << std::endl;


	return 0;
}
