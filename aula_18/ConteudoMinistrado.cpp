#include "ConteudoMinistrado.hpp"

unsigned int ConteudoMinistrado::proxId{0};

ConteudoMinistrado::ConteudoMinistrado(std::string descricao, unsigned short cargaHorariaConteudo):
	descricao(descricao), cargaHorariaConteudo(cargaHorariaConteudo){
		this->id = ConteudoMinistrado::proxId;
		ConteudoMinistrado::proxId++;
}

ConteudoMinistrado::~ConteudoMinistrado(){

}

const std::string& ConteudoMinistrado::getDescricao() const{
	return descricao;
}

unsigned short ConteudoMinistrado::getCargaHorariaConteudo() const{
	return cargaHorariaConteudo;
}

unsigned int ConteudoMinistrado::getId() const{
	return id;
}
