#include "Retangulo.hpp"

float Retangulo::getAltura(){
    return altura;
}

void Retangulo::setAltura(float novaAltura){
    altura = novaAltura;
}

float Retangulo::getLargura(){
    return largura;
}

void Retangulo::setLargura(float novaLargura){
    largura = novaLargura;
}

float Retangulo::areaRetangulo(){
    return altura*largura;
}

float Retangulo::perimetroRetangulo(){
    return (2*altura)+(2*largura);
}