#ifndef FIGURA_H
#define FIGURA_H

class figura{
protected:
    double area, perimetro;
public:
    figura();
    figura(double area, double perimetro);
    double calcularPerimetro();
    double calcularArea();
    double getArea();
    double getPerimetro();
};

#endif // FIGURA_H
