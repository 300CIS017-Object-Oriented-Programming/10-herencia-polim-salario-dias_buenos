//
// Created by Asus on 4/05/2025.
//

#include "DesarrolladorJr.h"


DesarrolladorJr::DesarrolladorJr():Empleado( nombre){
    std::cout << "DesarrolladorJr creado" << std::endl;
}

float DesarrolladorJr::calcularSalario() {
    float salario;
    salario= salarioBase;
    return salario;
}
