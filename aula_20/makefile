parametrosCompilacao=-Wall #-Wshadow
nomeAula=aula20

all: $(nomeAula)

$(nomeAula): main.o Pilha.hpp Fila.hpp
	g++ -o $(nomeAula) main.o Pilha.hpp Fila.hpp $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

clean:
	rm -f *.o *.gch $(nomeAula)
