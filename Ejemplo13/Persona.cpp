#include "Persona.hpp"

Persona::Persona(int e)
{
    edad = e;
    
    genero = rand() % 2;
    
    for (int i = 0; i < 9; ++i){
        dni[i] = '0' + rand() % 10;
    }
    dni[9] = '\0';
}

int Persona::getEdad() 
{
    return edad;
}

bool Persona::esMujer()
{
    return genero;
}

void Persona::setEdad(int nuevaEdad)
{
    edad = nuevaEdad;
}

void Persona::mostrar()
{
    cout << "DNI: " << dni << " | Edad: " << edad << " | Genero: " << (esMujer() ? "Mujer" : "Hombre") << endl;
}

Persona::~Persona()
{
}
