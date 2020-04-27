#include <iostream>
#include "Pessoa.hpp"
#include "Retangulo.hpp"
#include <string>

int main(int argc, char const *argv[]) 
{
  // Pessoa p1;
  // unsigned long cpf = 11111111111;
  // unsigned short idade = 23;

  // p1.setCpf(cpf);
  // p1.setIdade(idade);

  // std::cout << p1.getCpf() << std::endl;
  // std::cout << p1.getIdade() << std::endl;

  //----------------------------------------------------
  //Testando classe pessoa
  Pessoa p1;
  // std::string nome;
  // std::cout << "Nome: ";
  // std::getline(std::cin, nome);

  unsigned short idade;
  std::cout << "Idade: ";
  std::cin >> idade;

  p1.setIdade(idade);
  std::cout << "Sua Idade: " << p1.getIdade() << std::endl;

  // p1.setNome(nome);
  // std::cout << "Seu nome: " << p1.getNome() << std::endl;



  //----------------------------------------------------
  //Testando classe Retangulo
  // Retangulo r1;
  // float altura, largura;

  // std::cout << "Altura(cm): ";
  // std::cin >> altura;

  // std::cout << "Largura(cm): ";
  // std::cin >> largura;

  // r1.setAltura(altura);
  // r1.setLargura(largura);

  // std::cout << "Altura: " << r1.getAltura() << " | " << "Largura: " << r1.getLargura() << std::endl;
  // std::cout << "Area: " << r1.areaRetangulo() << " | " << "Perimetro: " << r1.perimetroRetangulo() << std::endl;



  return 0;
}
