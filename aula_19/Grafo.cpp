#include "Grafo.hpp"

#include <iostream>

Grafo::Grafo(/* args */)
{
}

Grafo::~Grafo()
{
}

Vertice* Grafo::adicionarVertice()
{
    Vertice* v{new Vertice};
    vertices.push_back(v);
    return v; 
}

void Grafo::removerVertice(Vertice vertice)
{

}

Aresta* Grafo::adicionarAresta(Vertice* v1, Vertice* v2)
{
    Aresta* a{new Aresta{v1, v2}}; //criando nova aresta
    v1->adicionarAresta(a); //adicionando essa aresta nos v1
    v2->adicionarAresta(a); //adicionando essa aresta nos v2
    arestas.push_back(a); //lista geral de arestas do grafo
    return a;
}

void Grafo::removerAresta(Aresta aresta)
{

}

void Grafo::imprimirGrafo()
{
    std::cout << "Quantidade vertices no grafo: " << vertices.size() << std::endl;
    std::cout << "Quantidade arestas no grafo: " << arestas.size() << std::endl;


}

