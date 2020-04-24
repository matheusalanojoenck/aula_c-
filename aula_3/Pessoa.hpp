#ifndef PESSOA_HPP
#define PESSOA_HPP
class Pessoa{
  public:
    unsigned long getCpf();
    void setCpf(unsigned long novoCpf);
    unsigned short getIdade();
    void setIdade(unsigned short novaIdade);

  private:
    char nome[50];
    unsigned long cpf;
    unsigned short idade;

    bool validarCPF(unsigned long cpf);
};
#endif
