#ifndef PERSONA_HPP
#define PERSONA_HPP
#include <iostream>
using namespace std;

class Persona
{
public:
    Persona(int e);
    ~Persona();
    
    int getEdad();
    bool esMujer();
    void setEdad(int nuevaEdad);
    void mostrar();

private:
    bool genero;
    int edad;
    char dni[9];
};

#endif // PERSONA_HPP
