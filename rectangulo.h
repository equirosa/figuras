#ifndef RECTANGULO_H
#define RECTANGULO_H

#include "figura.h"

class Rectangulo : public figura
{
private:
    double base, altura;
public:
    Rectangulo();
    Rectangulo(double base, double altura);
    void calcularArea();
    void calcularPerimetro();
    double getPerimetro();
    double getArea();
};

#endif // RECTANGULO_H
