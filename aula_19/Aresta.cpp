#include "Aresta.hpp"
#include <iostream>

unsigned int Aresta::proxId{0};

Aresta::Aresta(Vertice* v1, Vertice* v2)
    :id{proxId}, vertice1{v1}, vertice2{v2}
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