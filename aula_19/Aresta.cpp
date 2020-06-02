#include "Aresta.hpp"

unsigned int Aresta::proxId{0};

Aresta::Aresta(Vertice* vertice1, Vertice* vertice2)
    :id{proxId}, vertice1{vertice1}, vertice2{vertice1}
{
    Aresta::proxId++;
}

Aresta::~Aresta()
{
}

unsigned int Aresta::getId()
{
    return id;
}

Vertice* Aresta::getVertice1()
{
    return vertice1;
}

Vertice* Aresta::getVertice2()
{
    return vertice2;
}