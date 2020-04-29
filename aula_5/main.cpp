#include<iostream>
#include<string>

//#include"Pessoa.hpp"
#include"Retangulo.hpp"


int main(){
	Retangulo r1;
	std::cout << "Altura: " << r1.getAltura() << " | Largura: " << r1.getLargura() << std::endl;
	std::cout << "Area: " << r1.areaRetangulo() << " | Perimetro: " << r1.perimetroRetangulo() << std::endl;

	Retangulo r2{10};
	std::cout << "Altura: " << r2.getAltura() << " | Largura: " << r2.getLargura() << std::endl;
	std::cout << "Area: " << r2.areaRetangulo() << " | Perimetro: " << r2.perimetroRetangulo() << std::endl;

	Retangulo r3{20,10};
	std::cout << "Altura: " << r3.getAltura() << " | Largura: " << r3.getLargura() << std::endl;
	std::cout << "Area: " << r3.areaRetangulo() << " | Perimetro: " << r3.perimetroRetangulo() << std::endl;

	return 0;
}
