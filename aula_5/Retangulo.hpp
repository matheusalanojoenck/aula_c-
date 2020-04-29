#ifndef RETANGULO_HPP
#define RETANGULO_HPP
class Retangulo
{
public:
  Retangulo();
  Retangulo(float novaAltura);
  Retangulo(float novaAltura, float novaLargura);

  float getAltura();
  void setAltura(float novaAltura);

  float getLargura();
  void setLargura(float novaLargura);

  float areaRetangulo();
  float perimetroRetangulo();

private:
  float altura = 0;
  float largura = 0;
};
#endif