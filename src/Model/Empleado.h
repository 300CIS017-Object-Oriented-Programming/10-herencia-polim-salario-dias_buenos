//
// Created by Asus on 4/05/2025.
//

#ifndef EMPLEADO_H
#define EMPLEADO_H

#include <string>
#include <iostream>

class Empleado {

protected:
    float salarioBase;
    std::string nombre;
public:
    Empleado(std::string nombre);
    virtual float calcularSalario()=0;
    float getSalarioBase();
    std::string getNombre();

};




#endif //EMPLEADO_H
