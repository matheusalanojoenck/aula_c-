#include <iostream>
#include "Pessoa.hpp"
#include "Retangulo.hpp"

int main(int argc, char const *argv[]) 
{
  Pessoa p1;
  unsigned long cpf = 11111111111;
  unsigned short idade = 23;

  p1.setCpf(cpf);
  p1.setIdade(idade);

  std::cout << p1.getCpf() << std::endl;
  std::cout << p1.getIdade() << std::endl;

  return 0;
}
