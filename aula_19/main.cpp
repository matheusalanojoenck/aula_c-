#include <iostream>

#include "Aresta.hpp"
#include "Vertice.hpp"
#include "Grafo.hpp"



int main(int argc, char const *argv[])
{   
    Grafo* g{new Grafo};

    Vertice* v1{g->adicionarVertice()};
    Vertice* v2{g->adicionarVertice()};
    Vertice* v3{g->adicionarVertice()};

    g->adicionarAresta(v1, v2);
    g->adicionarAresta(v1, v3);
    // Aresta* a1{g->adicionarAresta(v1, v2)};
    // Aresta* a2{g->adicionarAresta(v1, v3)};


    g->imprimirGrafo();

    //std::cout << v1->getId() << v2->getId() << v3->getId() << std::endl;
    
    return 0;
}
