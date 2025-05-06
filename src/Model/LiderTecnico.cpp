//
// Created by Asus on 4/05/2025.
//

#include "LiderTecnico.h"

LiderTecnico::LiderTecnico():Empleado(nombre) {
    std::cout << "LiderTecnico creado" << std::endl;
}

float LiderTecnico::calcularSalario() {
    float salario;
    salario = salarioBase*1,25;
    return salario;
}
