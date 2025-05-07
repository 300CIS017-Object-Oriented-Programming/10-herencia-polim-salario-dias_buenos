//
// Created by Asus on 4/05/2025.
//

#include "Empresa.h"

Empresa::Empresa(){
  iniciarDatos();
}

void Empresa::iniciarDatos(){

  Empleado* jr1 = new DesarrolladorJr();
  Empleado* jr2 = new DesarrolladorJr();
  Empleado* senior1 = new DesarrolladorSenior();
  Empleado* senior2 = new DesarrolladorSenior();
  Empleado* tester1 = new Tester();
  Empleado* tester2 = new Tester();
  Empleado* Lider1 = new LiderTecnico();
  Empleado* Lider2 = new LiderTecnico();

  empleados.push_back(jr1);
  empleados.push_back(jr2);
  empleados.push_back(senior1);
  empleados.push_back(senior2);
  empleados.push_back(tester1);
  empleados.push_back(tester2);
  empleados.push_back(Lider1);
  empleados.push_back(Lider2);

  }

Empresa::~Empresa(){
  for (int i = 0; i < empleados.size(); i++){
    delete empleados[i];
    }
}
void Empresa::mostrarEmpleado(std::string nombreEmpleado){
  for (int i = 0; i < empleados.size(); i++){
    if (empleados[i]->getNombre()== nombreEmpleado){
      std::cout << "Nombre del empleado: " <<nombreEmpleado<<std::endl;
      std::cout <<"Salario: "<< empleados[i]->calcularSalario()<<std::endl;
    }
    else{
      //Pendiente ponerle el throw y eso
      std::cout << "El empleado no se encuentra en la base de datos "<<std::endl;
    }
  }

}

float Empresa::calcularNominaTotal(){
  float nominaTotal = 0;
  for (int i = 0; i < empleados.size(); i++){
    nominaTotal += empleados[i]->calcularSalario();
  }
  return nominaTotal;
}


