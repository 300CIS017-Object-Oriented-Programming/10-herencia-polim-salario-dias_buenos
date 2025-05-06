//
// Created by Asus on 4/05/2025.
//

#ifndef TESTER_H
#define TESTER_H
#include "Empleado.h"


class Tester : public Empleado{
public:
    Tester();
    float calcularSalario() override;

};



#endif //TESTER_H
