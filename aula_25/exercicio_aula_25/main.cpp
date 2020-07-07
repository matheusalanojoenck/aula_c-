#include <iostream>

#include "Forma.hpp"
#include "Quadrado.hpp"
#include "Circulo.hpp"
#include "Triangulo.hpp"

int main(int argc, char const *argv[])
{   
    Forma f{};
    std::cout << "Area forma(padrao): " << f.getArea() << std::endl;

    Triangulo t{10, 10};
    std::cout << "Area triangulo: " << t.getArea() << std::endl;

    Quadrado q{10};
    std::cout << "Area quadrado: " << q.getArea() << std::endl;

    Circulo c{10};
    std::cout << "Area circulo: " << c.getArea() << std::endl;
   
    return 0;
}
