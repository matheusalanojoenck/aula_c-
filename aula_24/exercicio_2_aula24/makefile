parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula24

all: $(nomeAula)

$(nomeAula): main.o Ponto.o Trajeto.o Euclidiana.o Manhattan.o
	g++ -o $(nomeAula) main.o Ponto.o Trajeto.o Euclidiana.o Manhattan.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o: Ponto.hpp Ponto.cpp
	g++ -c Ponto.cpp $(parametrosCompilacao)

Trajeto.o: Trajeto.hpp Trajeto.cpp
	g++ -c Trajeto.cpp $(parametrosCompilacao)

Euclidiana.o: Euclidiana.hpp Euclidiana.cpp
	g++ -c Euclidiana.cpp $(parametrosCompilacao)
	
Manhattan.o: Manhattan.hpp Manhattan.cpp
	g++ -c Manhattan.cpp $(parametrosCompilacao)
	
clean:
	rm -f *.o *.gch $(nomeAula)
