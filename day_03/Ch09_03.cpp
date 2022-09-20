#include <iostream>

//Shape class 선언

class Shape {
private : 
    Shape* next;
protected :
    virtual void draw();
public :
    Shape() {next = NULL;}
    virtual ~Shape() {}
    void paint();
    Shape* add(Shape* p);
    Shape* getNext() {return next;}
};

void Shape::paint() {
    draw();
}

void Shape::draw() {
    std::cout<<"--Shape--"<<std::endl;
}

Shape* Shape::add(Shape* p) {
    this->next = p;
    return p;
}


//Circle class 선언

class Circle : public Shape {
    int radius = 0;
protected : 
    virtual void draw();
};

void Circle::draw() {
    std::cout<<"Circle::draw()"<<std::endl;
}


//Rect class 선언

class Rect : public Shape {
protected : 
    virtual void draw();
};

void Rect::draw() {
    std::cout<<"Rect::draw()"<<std::endl;
}


//Line class 선언

class Line : public Shape {
protected : 
    virtual void draw();
};

void Line::draw() {
    std::cout<<"Line::draw()"<<std::endl;
}

int main() {
    Shape* pStart = NULL;
    Shape* pLast;

    pStart = new Circle();
    pLast = pStart;

    pLast = pLast->add(new Rect());
    pLast = pLast->add(new Circle());
    pLast = pLast->add(new Line());
    pLast = pLast->add(new Rect());

    Shape* p = pStart;

    while(p != NULL) {
        p->paint();
        p = p->getNext();
    }

    p = pStart;
    while(p != NULL) {
        Shape* q = p->getNext();
        delete p;
        p = q;
    }
}