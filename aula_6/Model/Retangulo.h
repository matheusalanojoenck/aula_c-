/**
 * Project Untitled
 */


#ifndef _RETANGULO_H
#define _RETANGULO_H

class Retangulo {
public: 
    
void Retangulo();
    
/**
 * @param novaAltura
 * @param novaLargura
 */
void Retangulo(float novaAltura, float novaLargura);
    
float getAltura();
    
/**
 * @param novaAltura
 */
void setAltura(float novaAltura);
    
float getLargura();
    
/**
 * @param novaLargura
 */
void setLargura(float novaLargura);
    
float areaRetangulo();
    
float perimetroRetangulo();
private: 
    float altura;
    float largura;
};

#endif //_RETANGULO_H