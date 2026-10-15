#include "Empleado.h"
#include <iostream>

Empleado::Empleado(std::string nombre, std::string area)
    : nombre(nombre), area(area)
{
}

std::string Empleado::getNombre() const
{
    return nombre;
}

std::string Empleado::getArea() const
{
    return area;
}

void Empleado::setNombre(const std::string& nuevoNombre)
{
    nombre = nuevoNombre;
}

void Empleado::setArea(const std::string& nuevaArea)
{
    area = nuevaArea;
}

void Empleado::mostrarInformacion() const
{
    std::cout << "Nombre: " << nombre << " | Area: " << area << "\n";
}

void Empleado::trabajar() const
{
    std::cout << getNombre()
              << " esta realizando una tarea general.\n";
}
