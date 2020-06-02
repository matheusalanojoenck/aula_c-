#include <iostream>

#include "Aresta.hpp"
#include "Vertice.hpp"
#include "Grafo.hpp"



int main(int argc, char const *argv[])
{   
    Grafo* g{new Grafo};

    Vertice* v1{g->adicionarVertice()};
    Vertice* v2{g->adicionarVertice()};

    Aresta* a1{g->adicionarAresta(v1, v2)};

    g->imprimirGrafo();

    std::cout << "id do vertice1 de a1: " << a1->getVertice1()->getId() << std::endl;
    std::cout << "Quantidade de arestas em v1: " << v1->getArestas().size() << std::endl;

    
    return 0;
}
