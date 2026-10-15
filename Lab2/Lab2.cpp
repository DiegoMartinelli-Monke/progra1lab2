#include "Desarrollador.h"
#include "TecnicoSoporte.h"
#include "Administrador.h"

int main()
{
    Desarrollador desarrollador("Ana", "C++");
    TecnicoSoporte tecnico("Carlos");
    Administrador administrador("Luis");

    Empleado* equipo[] = {
        &desarrollador,
        &tecnico,
        &administrador
    };

    for (Empleado* empleado : equipo)
    {
        empleado->mostrarInformacion();
        empleado->trabajar();
    }

    return 0;
}
