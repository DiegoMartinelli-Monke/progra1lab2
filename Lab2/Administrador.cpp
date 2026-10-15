#include "Administrador.h"
#include <iostream>

Administrador::Administrador(std::string nombre)
    : Empleado(nombre, "Administracion")
{
}

void Administrador::trabajar() const
{
    std::cout << getNombre()
              << " esta coordinando tareas del equipo.\n";
}
