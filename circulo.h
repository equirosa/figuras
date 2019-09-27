#ifndef CIRCULO_H
#define CIRCULO_H

#include <math.h>


class Circulo : public Figura
{
public:
    Circulo();
    Circulo(double radio);
private:
    double radio;
    double calcularArea();
    double calcularPerimetro();
};

#endif // CIRCULO_H
