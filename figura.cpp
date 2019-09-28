#include "figura.h"

figura::figura(){

}

figura::figura(double pArea, double pPerimetro){
    area = pArea;
    perimetro = pPerimetro;
}

double figura::getArea(){
    return area;
}

double figura::getPerimetro(){
    return perimetro;
}
