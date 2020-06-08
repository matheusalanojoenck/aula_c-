#include <iostream>

#include "Pilha.hpp"
#include "Fila.hpp"

int main(){
	// int retorno;
	// Pilha<int> p;
	// p.push(1);
	// p.push(2);
	// p.push(3);
	// p.push(4);

	// while(!p.estaVazia()){
	// 	p.pop(&retorno);
	// 	std::cout << retorno << std::endl;
	// }
	

	// std::cout << "Fim" << std::endl;

	Fila<int> f;
	f.push(1);
	f.push(2);
	f.push(3);

	std::cout << "Fila completa" << std::endl;
	f.imprimeFila();

	f.pop();

	std::cout << "Fila apos remoção" << std::endl;
	f.imprimeFila();
	return 0;
}
