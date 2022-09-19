#include <iostream>
#include <string>

class Rect {
private :
    int width;
    int height;
public :
    Rect(){width = 1; height = 1;}
    Rect(int w, int h) {width = w; height = h;}
    int getWidth(){return width;}
    int getHeight(){return height;}
    int getArea();
};

int Rect::getArea(){
    return width * height;
}

class Color {
private :
    std::string c;
public :
    Color () {c = "white"; std::cout<<"기본생성자"<<std::endl; }
    Color (std::string c);

};

int main(){
    
    Rect a;

    Rect* arr = new Rect[10];

    Rect r(2, 3);

    Rect* p = &r;

    std::cout<<"The width of r is "<<p->getWidth()<<std::endl;
    std::cout<<"The height of r is "<<p->getHeight()<<std::endl;


    /*
    Rect* q;
    
    int w;
    int h;

    std::cout<<"Input the width of q : ";
    std::cin>>w;

    std::cout<<"Input the height of q :";
    std::cin>>h;

    q = new Rect(w, h);

    std::cout<<"The width of q is "<<q->getWidth()<<std::endl;
    std::cout<<"The height of q is "<<q->getHeight()<<std::endl;
    std::cout<<"The Area of q is "<<q->getArea()<<std::endl;

    delete q;
    */

    int sum_of_area = 0;
    Rect arr_R[5] = {Rect(), Rect(2, 3), Rect(3, 4), Rect(4, 5), Rect(5, 6)};

    for(int i=0 ; i<5 ; i++){
        std::cout<<"The area of arr_R["<<i<<"] = "<<arr_R[i].getArea()<<std::endl;
        sum_of_area += arr_R[i].getArea();
    }

    std::cout<<"The sum of area = "<<sum_of_area<<std::endl;

    delete [] arr;

    return 0;
}