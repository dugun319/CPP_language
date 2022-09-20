#include <iostream>
#include <cstring>

class Person {
private :
    int id;
public :
    Person(int id = 0) {this->id = id;}
    virtual ~Person() {std::cout<<"id = "<<id<<std::endl;}
};

class Student : public Person {
private :
    char* name;
    int age;
public :
    Student(int id, const char* name) : Person(id) {
        int len = strlen(name);
        this->name = new char[len+1];
        strcpy(this->name, name);
    }
    char* getName() {return name;}
    int getAge(){return this->age;}
    ~Student() {
        std::cout<<"name = "<<name<<std::endl;
        delete [] name;
    }
};

class Shape {
public :
    void paint() {draw();}
    virtual void draw() = 0;
};

class Circle : public Shape {  
private :
    int radius;
public :
    Circle(int radius = 1) {this->radius = radius;}
    double getArea() {return 3.14 * radius * radius;}
    virtual void draw() { std::cout<<"Raidus = "<<radius<<std::endl;}
};

int main() {


    Person* p = new Student(10, "Son Yeon");

    Student q(20, "Test");   

    std::cout<<"name = "<<q.getName()<<std::endl;

    delete p;

    Circle* r = new Circle(10);
    r->paint();
}