//
// Created by Asus on 4/05/2025.
//

#include "Tester.h"

Tester::Tester():Empleado(nombre) {
    std::cout << "Tester creado" << std::endl;
}

float Tester::calcularSalario() {
    return salarioBase*1.05;
}
