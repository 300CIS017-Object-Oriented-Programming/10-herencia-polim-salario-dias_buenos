//
// Created by Asus on 4/05/2025.
//

#include "LiderTecnico.h"

LiderTecnico::LiderTecnico():Empleado(nombre) {
    std::cout << "LiderTecnico creado" << std::endl;
}

float LiderTecnico::calcularSalario() {
    return salarioBase*1,25;
}
