#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CPF_SIZE 11

typedef struct {
  char nome[50];
  char cpf[11];
  unsigned short int idade;
} Pessoa;

int check_digitos(char *cpf){
  int first_digit = cpf[CPF_SIZE-2] - '0';
  int second_digit = cpf[CPF_SIZE-1] - '0';
  int aux_soma = 0, aux_mult = 10;
  for (int i = 0; i < CPF_SIZE-2; i++)
  {
    printf("%d * %d\n", cpf[i] - '0', aux_mult);
    aux_soma += (cpf[i]-'0')*aux_mult;
    aux_mult--;
  }
  


  printf("1 digito: %d | 2 digito: %d\n", first_digit, second_digit);
  printf("\n%d\n", aux_soma);
}

//Retorna 1 se o CPF for valido. Retorna 0 se o CPF não forma valido
int valida_cpf(char *cpf){
  if(cpf == NULL) return 0;
  if (strlen(cpf) != CPF_SIZE) return 0;

  check_digitos(cpf);
  
}


void mostra_pessoa(Pessoa p){
  printf("Nome: %s \nIdade: %hu \nCPF: %s", p.nome, p.idade ,p.cpf);
}

int main(int argc, char const *argv[]) {
  Pessoa pessoa;

  //printf("Nome: ");
  //scanf("%s", pessoa.nome);
  printf("CPF: ");
  scanf("%s", pessoa.cpf);
  //printf("Idade: ");
  //scanf("%hu", &pessoa.idade);

  //mostra_pessoa(pessoa);

  //strcpy(pessoa.cpf, "008185736944");

  valida_cpf(pessoa.cpf);

  //23231517117

  return 0;
}
