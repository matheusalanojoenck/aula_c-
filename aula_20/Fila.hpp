#ifndef FILA_HPP
#define FILA_HPP

#include <iostream>
#include <list>
template <typename T>

class Fila
{
private:
    std::list<T> fila;
public:
    Fila()
    {
    }

    ~Fila()
    {
    }

    void push(T valor)
    {
        fila.push_back(valor);
    }

    void pop()
    {
        if(vazia())
        {
            std::cout << "Fila vazia! Não foi possivel remover" << std::endl;
        }else{
            fila.pop_front();
        }
    }

    bool vazia()
    {
        return fila.empty();
    }

    int tamanho()
    {
        return fila.size();
    }

    void imprimeFila()
    {
        for(T elemento : fila)
        {
            std::cout << elemento << std::endl;
        }
    }
};

#endif