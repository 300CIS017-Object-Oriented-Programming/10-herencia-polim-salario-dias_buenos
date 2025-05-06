//
// Created by Asus on 4/05/2025.
//

#ifndef LIDERTECNICO_H
#define LIDERTECNICO_H
#include "Empleado.h"


class LiderTecnico : public Empleado {
    public:
    LiderTecnico();
    float calcularSalario() override;

};



#endif //LIDERTECNICO_H
