//
// Created by Asus on 4/05/2025.
//

#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior():Empleado(nombre) {
    std::cout << "DesarrolladorSenior creado" << std::endl;
}


float DesarrolladorSenior::calcularSalario() {
    float salario;
    salario=salarioBase*(1.2);
    return salario;
}

