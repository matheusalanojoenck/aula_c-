#ifndef RETANGULO_HPP
#define RETANGULO_HPP
class Retangulo
{
public:
  Retangulo();
  Retangulo(float novaAltura, float novaLargura = 0);

  float getAltura();
  void setAltura(float novaAltura);

  float getLargura();
  void setLargura(float novaLargura);

  float areaRetangulo();
  float perimetroRetangulo();

  static unsigned int contador;

private:
  float altura = 0;
  float largura = 0;
};
#endif