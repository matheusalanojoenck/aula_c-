#ifndef VERTICE_HPP
#define VERTICE_HPP

#include <list>

#include "Aresta.hpp"

class Vertice
{
friend class Grafo;
private:
    static unsigned int proxId;
    unsigned int id;
    std::list<Aresta*> arestas; 
public:
    Vertice();
    ~Vertice();
    unsigned int getId();
    void adicionarAresta(Aresta* aresta);
    std::list<Aresta*> getArestas();
};

#endif