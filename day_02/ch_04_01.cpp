#include <iostream>

class Circle{
private :
    int radius;
public :
    Circle() {radius = 1;}
    Circle(int r) {radius = r;}
    void setRadius(int r) {radius =r;}
    double getArea();
    ~Circle() {std::cout<<"Destructor is called\n";}
};

double Circle::getArea(){
    return 3.14 * radius * radius;
}


int main(){
    Circle donut;
    Circle pizza(30);

    std::cout<<"donut.getArea() = "<<donut.getArea()<<std::endl;

    Circle* p;
    p = &donut;

    std::cout<<"p->getArea() = "<<p->getArea()<<std::endl;
    std::cout<<"(*p).getArea() = "<<(*p).getArea()<<std::endl;

    p = &pizza;

    std::cout<<"p->getArea() = "<<p->getArea()<<std::endl;
    std::cout<<"(*p).getArea() = "<<(*p).getArea()<<std::endl;

    Circle circleArray[4];
    
    circleArray[0].setRadius(10); 
    circleArray[1].setRadius(20);
    circleArray[2].setRadius(30);

    for(int i = 0 ; i<3 ; i++){
        std::cout<<"circleArray[i].getArea() =\t"<<circleArray[i].getArea()<<std::endl;
    }

    p = circleArray;

    for(int i=0 ; i<3 ; i++){
        std::cout<<"p = "<<p<<"\tp->getArea() =\t"<<p->getArea()<<std::endl;
        p++;
    }

    Circle* p1 = circleArray;
    Circle* p2 = circleArray;

    for(int i=0 ; i<3 ; i++){
        std::cout<<"p1 + "<<i<<" =\t\t\t"<<(*p1++).getArea()<<std::endl;
        std::cout<<"circleArray + "<<i<<")->getArea() =\t"<<(circleArray+i)->getArea()<<std::endl;
        std::cout<<"(p2 + "<<i<<")->getArea =\t\t"<<(p2+i)->getArea()<<std::endl;
        //std::cout<<"*(p2 + "<<i<<").getArea = "<<*(p2+i).getArea()<<std::endl;
    }

    int* pInt = new int;

    std::cout<<"pInt = "<<pInt<<std::endl;

    std::cout<<"sizeof(donut) = "<<sizeof(donut)<<std::endl;
    std::cout<<"sizeof(circleArray) = "<<sizeof(circleArray)<<std::endl;

    return 0;
}