parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula19

all: $(nomeAula)

$(nomeAula): main.o Grafo.o Vertice.o Aresta.o
	g++ -o $(nomeAula) main.o Grafo.o Vertice.o Aresta.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Grafo.o: Grafo.cpp
	g++ -c Grafo.cpp $(parametrosCompilacao)

Vertice.o: Vertice.cpp
	g++ -c Vertice.cpp $(parametrosCompilacao)

Aresta.o: Aresta.cpp
	g++ -c Aresta.cpp $(parametrosCompilacao)

clean:
	rm *.o $(nomeAula)