#ifndef FIGURA_H
#define FIGURA_H

class figura{
protected:
    double area, perimetro;
public:
    figura();
    figura(int area, int perimetro);
    double calcularPerimetro();
    double calcularArea();
};

#endif // FIGURA_H
