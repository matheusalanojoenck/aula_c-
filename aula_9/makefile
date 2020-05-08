parametrosCompilacao=-Wall #-Wshadow

all: aula9

aula9: main.o Pessoa.o Disciplina.o Curso.o
	g++ -o3 -o aula9 main.o Pessoa.o Disciplina.o Curso.o $(parametrosCompilacao)

main.o: main.cpp
	g++ -c main.cpp $(parametrosCompilacao)

Pessoa.o: Pessoa.hpp Pessoa.cpp
	g++ -c Pessoa.cpp $(parametrosCompilacao)

Disciplina.o: Disciplina.hpp Disciplina.cpp
	g++ -c Disciplina.cpp $(parametrosCompilacao)

Curso.o: Curso.hpp Curso.cpp
	g++ -c Curso.cpp $(parametrosCompilacao)

run: aula9 clean
	./aula9

clean:
	rm *.o aula9
