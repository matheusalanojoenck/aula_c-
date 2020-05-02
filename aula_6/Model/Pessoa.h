/**
 * Project Untitled
 */


#ifndef _PESSOA_H
#define _PESSOA_H

class Pessoa {
public: 
    
void Pessoa();
    
/**
 * @param nomePessoa
 * @param idade
 */
void Pessoa(string nomePessoa, unsigned short int idade);
    
/**
 * @param nomePessoa
 * @param idade
 * @param cpfPessoa
 */
void Pessoa(string nomePessoa, unsigned short int idade, unsigned long cpfPessoa);
    
string getNome();
    
/**
 * @param novoNome
 */
void setNome(string novoNome);
    
unsigned short int getIdade();
    
/**
 * @param novaIdade
 */
void setIdade(unsigned short int novaIdade);
    
unsigned long getCpf();
    
/**
 * @param novoCpf
 */
void setCpf(unsigned long novoCpf);
private: 
    string nome;
    unsigned char idade;
    unsigned long cpf;
    
/**
 * @param cpfTeste
 */
bool validarCpf(unsigned long cpfTeste);
};

#endif //_PESSOA_H