//
// Created by Asus on 4/05/2025.
//

#include "View.h"
#include "Empleado.h"
#include "Empresa.h"

View::View() {
    Empresa* miEmpresa = new Empresa();
}

View::~View() {
    delete miEmpresa;
}

void View::mostrarMenu() {
    int opcion;
    std::cout << "========== Bienvenido =========\n";
    do{
        std::cout << "1. Calcular salario UN empleado\n";
        std::cout << "2. Calcular nomina total\n";
        std::cout << "0. Salir\n\n";
        std::cout << "Ingrese la opcion que desea realizar\n";
        std::cin >> opcion;
        switch (opcion) {
            case 1: {
                std::string nombre;
                std::cout << "Ingrese el nombre del empleado\n";
                std::cin>>nombre;
                miEmpresa->mostrarEmpleado(nombre);
                break;
            }
            case 2:
                miEmpresa->calcularNominaTotal();
                break;
            default:
                break;
        }
    } while (opcion != 0);

}
