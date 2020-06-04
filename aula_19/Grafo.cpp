#include "Grafo.hpp"

#include <iostream>

Grafo::Grafo(/* args */)
{
}

Grafo::~Grafo()
{
    std::list<Aresta*>::iterator it;
    for (it = arestas.begin(); it != arestas.end(); it++)
    {
        delete *it;
    }

    std::list<Vertice*>::iterator itV;
    for (itV = vertices.begin(); itV != vertices.end(); it++)
    {
        delete *it;
    }
}

Vertice* Grafo::adicionarVertice()
{
    Vertice* v{new Vertice};
    vertices.push_back(v);
    return v; 
}

/**
 * Remoção de um vertice:
 * a função itera sobre a lista de aresta do vertice e a remove do grafo
 **/
void Grafo::removerVertice(Vertice* vertice)
{   
    std::list<Aresta*> copia = vertice->getArestas();
    std::list<Aresta*>::iterator it = copia.begin();
    for(;it != copia.end(); it++)
    {   
        this->removerAresta(*it);
    }
    delete vertice;
}

Aresta* Grafo::adicionarAresta(Vertice* v1, Vertice* v2)
{   
    if(v1 == v2) return nullptr;//os dois vertices nao podem ser iguais
    if(v1 == nullptr || v2 == nullptr) return nullptr; //nenhum dos dois vertices podem ser null

    Aresta* a{new Aresta{v1, v2}}; //criando nova aresta
    v1->adicionarAresta(a); //adicionando essa aresta nos v1
    v2->adicionarAresta(a); //adicionando essa aresta nos v2
    arestas.push_back(a); //lista geral de arestas do grafo
    return a;
}

/**
 * Remoção de uma aresta:
 * vai para cada vertice dessa aresta e a essa aresta da lista dos dois vertices
 * e remove a aresta da lista geral de vertices do grafo
 **/
void Grafo::removerAresta(Aresta* aresta)
{
    aresta->getVertice1()->removerAresta(aresta);
    aresta->getVertice2()->removerAresta(aresta);
    arestas.remove(aresta);

    delete aresta;
}

void Grafo::imprimirGrafo()
{
    std::list<Aresta*>::iterator it;

    for (it = this->arestas.begin(); it != this->arestas.end(); it++)
    {
        std::cout << "aresta: " << (*it)->getId() << " | ligação: " << (*it)->getVertice1()->getId() << " --- " << (*it)->getVertice2()->getId() << std::endl;
    }

    //std::cout << "Quantidade vertices no grafo: " << vertices.size() << std::endl;
    //std::cout << "Quantidade arestas no grafo: " << arestas.size() << std::endl;
}