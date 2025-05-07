//
// Created by Asus on 4/05/2025.
//

#include "DesarrolladorSenior.h"

DesarrolladorSenior::DesarrolladorSenior():Empleado(nombre) {
    std::cout << "DesarrolladorSenior creado" << std::endl;
}


float DesarrolladorSenior::calcularSalario() {
    return salarioBase*(1.2);
}

