#include <iostream>
#include <string>
#include <list>

#include "Pessoa.hpp"
#include "Disciplina.hpp"
#include "Curso.hpp"

int main(){
/* 	std::list<int> lista;
	std::list<int>::iterator it;

	lista.push_back(5);
	lista.push_back(10);
	lista.push_front(28);

	for(it = lista.begin(); it != lista.end(); it++){
		std::cout << *it << std::endl;
	} */

	Pessoa* p1{new Pessoa{"Matheus"}};
	Pessoa* p2{new Pessoa{"Maria"}};
	Pessoa* p3{new Pessoa{"Pedro"}};
	Pessoa* p4{new Pessoa{"Pedro"}};

	std::list<Pessoa*> pessoas;
	std::list<Pessoa*>::iterator itPessoas;
	pessoas.push_back(p1);
	pessoas.push_back(p2);
	pessoas.push_back(p3);
	pessoas.push_back(p4);

	for(itPessoas = pessoas.begin(); itPessoas != pessoas.end(); itPessoas++){
		std::cout << (*itPessoas)->getNome() << std::endl;
	}

	itPessoas = pessoas.begin();
	while(itPessoas != pessoas.end()){
		if((*itPessoas)->getNome() == "Pedro"){
			itPessoas = pessoas.erase(itPessoas);
		}else{
			itPessoas++;
		}
	}

	for(itPessoas = pessoas.begin(); itPessoas != pessoas.end(); itPessoas++){
		std::cout << (*itPessoas)->getNome() << std::endl;
	}



	return 0;
}
