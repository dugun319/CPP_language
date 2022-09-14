#include <iostream>
#include <string>

class Circle{
public:
    int radius = 10;
    double getArea();
    Circle(){
        std::cout<<"radius = 1"<<std::endl;
        radius = 1;
    }
    Circle(int r){
        std::cout<<"radius = "<<r<<std::endl;
        radius = r;
    }
    ~Circle(){
        std::cout<<"Destructor is called"<<std::endl;
    }
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}

int main(){
    int width;
    int height;

    std::cout<<"Hello, world"<<std::endl;

/*
    std::cout << "너비와 높이를 입력하세요>>";
    std::cin >> width >> height;
    std::cout << "width = " << width << std::endl << "height = " << height << std::endl;
*/

    Circle donut;
    std::cout<<donut.radius<<std::endl;

    Circle pizza(10);
    // Circle pizza = Circle(10);
    std::cout<<pizza.radius<<std::endl;

    return 0;
}