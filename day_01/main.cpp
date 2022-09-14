#include <iostream>
#include "Circle.h"

int main(){
    Circle donut;
    double area = donut.getArea();
    std::cout<<"The area of donut is "<<area<<std::endl;

    Circle pizza(30);
    area = pizza.getArea();
    std::cout<<"The area of donut is "<<area<<std::endl;
}   