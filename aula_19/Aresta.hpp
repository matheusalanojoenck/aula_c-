#ifndef ARESTA_HPP
#define ARESTA_HPP

class Vertice;

class Aresta
{
friend class Vertice;

private:
    static unsigned int proxId;
    unsigned int id;
    Vertice* vertice1;
    Vertice* vertice2;
public:
    Aresta(Vertice* vertice1, Vertice* vertice2);
    ~Aresta();
    unsigned int getId();

    Vertice* getVertice1();
    Vertice* getVertice2();
};

#endif