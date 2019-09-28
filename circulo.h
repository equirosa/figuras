#ifndef CIRCULO_H
#define CIRCULO_H

#include "figura.h"

class Circulo : public figura
{
public:
    Circulo();
    Circulo(double radio);
    void calcularArea();
    void calcularPerimetro();
    double getPerimetro();
    double getArea();
private:
    double radio;
};

#endif // CIRCULO_H
