#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <string>

class Pessoa{
  public:
    unsigned long getCpf();
    void setCpf(unsigned long novoCpf);

    unsigned short getIdade();
    void setIdade(unsigned short novaIdade);

    std::string getNome();
    void setNome(std::string novoNome);

  private:
    std::string nome;
    unsigned long cpf;
    unsigned short idade;

    bool validarCPF(unsigned long cpf);
};
#endif
