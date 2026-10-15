#pragma once
#include "Empleado.h"

class TecnicoSoporte : public Empleado
{
public:
    TecnicoSoporte(std::string nombre);
    void trabajar() const override;
};
