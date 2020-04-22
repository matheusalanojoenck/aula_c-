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

  int aux_first_digit, aux_second_digit;
  int aux_soma = 0, aux_mult = 10;
  int resto;

  //----VERIFICANDO PRIMEIRO DIGITO-------
  for (int i = 0; i < CPF_SIZE-2; i++)
  {
    aux_soma += (cpf[i]-'0')*aux_mult;
    aux_mult--;
  }

  resto = aux_soma % 11;

  //Calcula qual deveria ser o primeiro digito
  if(resto < 2){
    aux_first_digit = 0;
  }else{
    aux_first_digit = 11 - resto;
  }

  //Reforna falso caso o primeiro digito for diferente da verificação
  if(aux_first_digit != first_digit) return 0;
  
  //----VERIFICANDO SEGUNDO DIGITO-------
  aux_soma = 0;
  aux_mult = 11;

  for (int i = 0; i < CPF_SIZE-1; i++)
  {
    aux_soma += (cpf[i]-'0')*aux_mult;
    aux_mult--;
  }

  resto = aux_soma % 11;

  //Calcula qual deveria ser o segundo digito
  if(resto < 2){
    aux_second_digit = 0;
  }else{
    aux_second_digit = 11 - resto;
  }

  //Reforna falso caso o segundo digito for diferente da verificação
  if(aux_second_digit != second_digit) return 0;

  return 1;
}

//Verifica para CPF com todos os numeros iguais
int isSingleDigit(const char *cpf)
{
  int singleDigit = 1;
  ++cpf;
  do {
	singleDigit = singleDigit && (*(cpf - 1) == *cpf);
	++cpf;
  } while (*cpf && singleDigit);
  return singleDigit;
}

//Retorna 1 se o CPF for valido. Retorna 0 se o CPF não forma valido
int valida_cpf(char *cpf){
  if(cpf == NULL)
  {
    return 0;
  } 
  if (strlen(cpf) != CPF_SIZE)
  {
    return 0;
  }

  if (isSingleDigit(cpf)) {
	  return 0;
  } 

  return check_digitos(cpf);
}

void mostra_pessoa(Pessoa p){
  printf("Nome: %s \nIdade: %hu \nCPF: %s", p.nome, p.idade ,p.cpf);
}

int main(int argc, char const *argv[]) {

  int qnt = 5;
  Pessoa pessoa[qnt];

  //Leitura de dados
  for (int i = 0; i < qnt; i++)
  {
    printf("Nome: ");
    scanf("%s", pessoa[i].nome);
    printf("Idade: ");
    scanf("%hu", &pessoa[i].idade);
    printf("CPF: ");
    scanf("%s", pessoa[i].cpf);
    while (valida_cpf(pessoa[i].cpf) == 0)
    {
      printf("CPF invalida! Digite novamente!\n");
      printf("CPF: ");
      scanf("%s", pessoa[i].cpf);
    }
  }

  return 0;
}
