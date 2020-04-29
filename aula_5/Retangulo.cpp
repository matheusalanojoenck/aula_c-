#include "Retangulo.hpp"
#include<iostream>

Retangulo::Retangulo()
    : altura{0}, largura{0}
{
    std::cout << "Construtor Retangulo 1" << std::endl;
}

Retangulo::Retangulo(float novaAltura, float novaLargura)
    : altura{novaAltura}, largura{novaLargura}
{
    std::cout << "Construtor Retangulo 2" << std::endl;
}

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