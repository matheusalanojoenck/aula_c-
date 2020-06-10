#include <iostream>

#include "Pilha.hpp"
#include "Fila.hpp"

int main(){
	Fila<float> f;
	f.push(1.2);
	f.push(2.5);
	f.push(3.4);
	f.imprimeFila();
	
	Fila<char> f2;
	f2.push('a');
	f2.push('b');
	f2.push('c');
	f2.imprimeFila();

	Fila<> f3;
	f3.push(1);
	f3.push(2);
	f3.push(3);
	f3.imprimeFila();

	return 0;
}
