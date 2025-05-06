//
// Created by Asus on 4/05/2025.
//

#include "Empleado.h"

Empleado::Empleado(std::string nombre) {
    this->salarioBase=1400000;
    this->nombre=nombre;
    std::cout<<"Empleado creado"<<std::endl;
}

float Empleado::getSalarioBase() {
    return this->salarioBase;
}

std::string Empleado::getNombre() {
    return this->nombre;

}
