#include "TecnicoSoporte.h"
#include <iostream>

TecnicoSoporte::TecnicoSoporte(std::string nombre)
    : Empleado(nombre, "Soporte")
{
}

void TecnicoSoporte::trabajar() const
{
    std::cout << getNombre()
              << " esta resolviendo un incidente tecnico.\n";
}
