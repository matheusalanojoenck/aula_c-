#include <iostream>

#include "Aresta.hpp"
#include "Vertice.hpp"
#include "Grafo.hpp"

#include <list>


int main(int argc, char const *argv[])
{   
    Grafo* g{new Grafo};

    Vertice* v0{g->adicionarVertice()};
    Vertice* v1{g->adicionarVertice()};
    Vertice* v2{g->adicionarVertice()};
    Vertice* v3{g->adicionarVertice()};


    Aresta* a0{g->adicionarAresta(v0, v1)};
    Aresta* a1{g->adicionarAresta(v1, v2)};
    Aresta* a2{g->adicionarAresta(v2, v3)};
    Aresta* a3{g->adicionarAresta(v3, v0)};


    std::cout << "Lista completa" << std::endl;
    g->imprimirGrafo();

    g->removerAresta(a1);
    std::cout << "Lista apos remoção de uma aresta" << std::endl;
    g->imprimirGrafo();    
    return 0;
}
