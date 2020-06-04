#include "Vertice.hpp"

unsigned int Vertice::proxId{0};

Vertice::Vertice()
    : id{proxId}
{
    Vertice::proxId++;
}

Vertice::~Vertice()
{
    std::list<Aresta*>::iterator it;
    for (it = arestas.begin(); it != arestas.end(); it++)
    {
        delete *it;
    }
}

unsigned int Vertice::getId()
{
    return id;
}

void Vertice::adicionarAresta(Aresta* aresta)
{
    arestas.push_back(aresta);
}

void Vertice::removerAresta(Aresta* aresta)
{
    arestas.remove(aresta);
}

std::list<Aresta *> Vertice::getArestas()
{
    return arestas;
}