#include "circulo.h"
#include <math.h>
#include "figura.cpp"

Circulo::Circulo()
{
    radio = 0;
}
Circulo::Circulo(double pRadio){
        radio = pRadio;
    }
double Circulo::getArea(){
    return  figura::getArea();
    }

double Circulo::getPerimetro(){
    return figura::getPerimetro();
    }

void Circulo::calcularArea()
    {
        area = 3.14150265*pow(radio,2);
    }

void Circulo::calcularPerimetro()
    {
        perimetro = 2*3.14159265*radio;
    }
