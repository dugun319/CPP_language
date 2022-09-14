#include <iostream>
#include "Circle.h"

Circle::Circle(){
    radius = 1;
    std::cout<<"Radius "<<radius<<" circle is created"<<std::endl;
}

Circle::Circle(int r){
    radius = r;
    std::cout<<"Radius "<<radius<<" circle is created"<<std::endl;
}

double Circle::getArea(){
    return 3.14 * radius * radius;
}