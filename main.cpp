#include <iostream>
#include "circulo.cpp"

using namespace std;

int main()
{

    Circulo circ = *new Circulo(50);
    circ.calcularArea();
    circ.calcularPerimetro();
    cout << circ.getArea() << endl;
    cout << circ.getPerimetro() << endl;
    return 0;
}
