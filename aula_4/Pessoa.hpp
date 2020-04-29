#ifndef PESSOA_HPP
#define PESSOA_HPP
#include <string>

class Pessoa{
  public:
    unsigned long getCpf();
    void setCpf(unsigned long novoCpf);

    inline unsigned short getIdade(){
      return idade;

    }
    inline void setIdade(const unsigned short novaIdade){
      idade = (unsigned char)novaIdade;
    }

    // unsigned short getIdade();
    // void setIdade(const unsigned short novaIdade);


    std::string getNome();
    void setNome(std::string novoNome);

  private:
    std::string nome;
    unsigned long cpf;
    unsigned char idade;

    bool validarCPF(unsigned long cpf);
};
#endif
