#include "rectangulo.h"
#include "figura.cpp"

Rectangulo::Rectangulo(){
    base = 0;
    altura = 0;
}
Rectangulo::Rectangulo(double pBase, double pAltura){
        base = pBase;
        altura = pAltura;
}
double Rectangulo::getArea(){
    return figura::getArea();
}

double Rectangulo::getPerimetro(){
    return figura::getPerimetro();
}

void Rectangulo::calcularArea(){
    area = base * altura;
}

void Rectangulo::calcularPerimetro(){
    perimetro = 2 * base + 2 * altura;
}
