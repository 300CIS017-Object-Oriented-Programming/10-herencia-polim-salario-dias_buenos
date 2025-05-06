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
  }

Empresa::~Empresa(){

}

