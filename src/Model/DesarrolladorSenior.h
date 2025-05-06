//
// Created by Asus on 4/05/2025.
//

#ifndef DESARROLLADORSENIOR_H
#define DESARROLLADORSENIOR_H

#include "Empleado.h"

class DesarrolladorSenior : public Empleado {

    public:
    DesarrolladorSenior();
    virtual ~DesarrolladorSenior()=default;
    float calcularSalario() override;

};



#endif //DESARROLLADORSENIOR_H
