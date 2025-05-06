//
// Created by Asus on 4/05/2025.
//

#ifndef DESARROLLADORJR_H
#define DESARROLLADORJR_H

#include "Empleado.h"


class DesarrolladorJr : public Empleado {
    public:
    DesarrolladorJr();
    float calcularSalario() override;

};



#endif //DESARROLLADORJR_H
