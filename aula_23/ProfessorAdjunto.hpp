#ifndef PROFESSORADJUNTO_HPP
#define PROFESSORADJUNTO_HPP

#include "Professor.hpp"

class ProfessorAdjunto : public Professor
{
    public:
        using Professor::Professor;

        unsigned int getSalario() const;

    private:
};

#endif