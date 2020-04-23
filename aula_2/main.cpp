#include <iostream>
#include "Pessoa.hpp"
#include "Retangulo.hpp"

int main(int argc, char const *argv[]) 
{
  //std::cout << "Olarrrr" << std::endl;

  // char meuChar;
  // int meuInt;
  //
  // std::cout << "Digite um char e um int: ";
  // std::cin >> meuChar >> meuInt;
  // std::cout << meuChar << " " << meuInt << std::endl;

  // Pessoa p1, p2;
  // std::cin >> p1.cpf >> p2.cpf;
  // std::cout << p1.cpf << "\t"<< p2.cpf << std::endl;

  Pessoa pessoa;

  std::cout << "Pessoa" << std::endl;
  std::cout << "Nome: ";
  std::cin >> pessoa.nome;
  std::cout << "Idade: ";
  std::cin >> pessoa.idade;
  std::cout << "CPF: ";
  std::cin >> pessoa.cpf;

  std::cout << pessoa.nome << "\t" << pessoa.idade << "\t" << pessoa.cpf << std::endl;

  std::cout << "--------------------" << std::endl;
  
  Retangulo retangulo;

  std::cout << "Retangulo" << std::endl;
  std::cout << "Altura(cm): ";
  std::cin >> retangulo.altura;
  std::cout << "Largura(cm): ";
  std::cin >> retangulo.largura;
  std::cout << retangulo.altura << "\t" << retangulo.largura << std::endl;

  return 0;
}
