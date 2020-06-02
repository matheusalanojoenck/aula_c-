#ifndef GRAFO_HPP
#define GRAFO_HPP

#include <list>

#include "Vertice.hpp"
#include "Aresta.hpp"

class Grafo
{
private:
    std::list<Vertice*> vertices;
    std::list<Aresta*> arestas;
public:
    Grafo();
    ~Grafo();
    Vertice* adicionarVertice();
    void removerVertice(Vertice vertice);
    Aresta* adicionarAresta(Vertice* v1, Vertice* v2);
    void removerAresta(Aresta aresta);
    void imprimirGrafo();

};

#endif