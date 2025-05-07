//
// Created by Asus on 4/05/2025.
//

#ifndef EMPRESA_H
#define EMPRESA_H

#include <vector>
#include <iostream>
#include "Empleado.h"
#include "DesarrolladorJr.h"
#include "DesarrolladorSenior.h"
#include "Tester.h"
#include "LiderTecnico.h"


class Empresa {
  private:
    std::vector <Empleado*> empleados;
    void iniciarDatos();
  public:
     Empresa();
     ~Empresa();
     void mostrarEmpleado(std::string nombreEmpleado);
     float calcularNominaTotal();


};



#endif //EMPRESA_H
