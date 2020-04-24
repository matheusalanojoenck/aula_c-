#include "Pessoa.hpp"

unsigned long Pessoa::getCpf()
{
    return cpf;
}

void Pessoa::setCpf(unsigned long novoCpf)
{
    if(validarCPF(novoCpf))
    {
        cpf = novoCpf;
        //return true;
    }else{
        //return false;
    }
    
}

unsigned short Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setIdade(unsigned short novaIdade)
{
    idade = novaIdade;
}

bool Pessoa::validarCPF(unsigned long cpf){
	int somatorioValidaUltimo;
	int modulo;
	int somatorioValidaPenultimo = 0;
	int ultimo = cpf%10;
	cpf = cpf/10;
	int penultimo = cpf%10;
	cpf = cpf/10;
	
	somatorioValidaUltimo = penultimo*2;
	for(int i=2; i <= 11; i++){
		modulo = cpf%10;
		cpf = cpf/10;
		somatorioValidaPenultimo += modulo*i;
		somatorioValidaUltimo += modulo*(i+1);
	}
	modulo = somatorioValidaPenultimo%11;
	if(modulo < 2){
		if(!penultimo)
			return 0;//cpf invalido
	}else{
		if(penultimo != 11 - modulo)
			return 0;//cpf invalido
	}
	modulo = somatorioValidaUltimo%11;
	if(modulo < 2){
		if(!ultimo)
			return 0;//cpf invalido
	}else{
		if(ultimo != 11-modulo)
			return 0;//cpf invalido
	}
	return 1;//cpf valido
}