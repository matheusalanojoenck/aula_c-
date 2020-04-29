#include<iostream>
#include<string>

#include"Pessoa.hpp"


int main(){

	Pessoa p1;
	Pessoa p2{"Matheus", 23}; 
	Pessoa p3{"Joao", 22, 11111111111};

	std::cout << p1.getCpf() << std::endl;

	return 0;
}
