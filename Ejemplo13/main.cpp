#include <set>
#include <stdio.h>
#include <vector>
#include "Persona.hpp"

int main(int argc, char **argv)
{
    vector<Persona> personas;
    set<int> edadesUnicas;

    srand(time(0)); // Inicializar semilla para números aleatorios

    // Crear 10 personas con edades únicas entre 18 y 27
    while (personas.size() < 10) {
        int edad = 18 + rand() % 10; // Edad entre 18 y 27
        if (edadesUnicas.find(edad) == edadesUnicas.end()) {
            personas.emplace_back(edad);
            edadesUnicas.insert(edad);
        }
    }

    // Mostrar la información de cada persona
    for (auto& persona : personas) {
        persona.mostrar();
    }

    return 0;
}
