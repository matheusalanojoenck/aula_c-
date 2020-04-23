#include <iostream>
#include"Pessoa.hpp"

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

  std::cout << "Nome: ";
  std::cin >> pessoa.nome;
  std::cout << "Idade: ";
  std::cin >> pessoa.idade;
  std::cout << "CPF: ";
  std::cin >> pessoa.cpf;

  std::cout << pessoa.nome << "\t" << pessoa.idade << "\t" << pessoa.cpf << std::endl;

  std::cout << "Retangulo";


  return 0;
}
