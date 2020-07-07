parametrosCompilacao=-Wall -O3
nomeAula=aula23

$(nomeAula): main.o Forma.o Quadrado.o Triangulo.o Circulo.o 
	g++ -o $(nomeAula) main.o Forma.o Quadrado.o Triangulo.o Circulo.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Quadrado.o: Quadrado.hpp Quadrado.cpp
	g++ -c Quadrado.cpp $(parametrosCompilacao)

Triangulo.o: Triangulo.hpp Triangulo.cpp
	g++ -c Triangulo.cpp $(parametrosCompilacao)

Circulo.o: Circulo.hpp Circulo.cpp
	g++ -c Circulo.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)

