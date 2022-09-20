#include <iostream>

class Base {
public :
    void func() {f();}
    void f() {
        std::cout<<"Base::f() is called"<<std::endl;
    }
};

class Derived : public Base {
public :
    void f() {
        std::cout<<"Derived::f() is called"<<std::endl;
    }
};

class A {
public :
    void func() {f();}
    virtual void f(){
        std::cout<<"A::f() is called"<<std::endl;
    }
};

class B : public A{
public :
    void f(){
        std::cout<<"B::f() is called"<<std::endl;
    }
};

class C : public B {
public :
    void f(){
        std::cout<<"C::f() is called"<<std::endl;
    }
};

int main() {
    C c;
    c.f();
    
    A* pa;
    B* pb;

    pa = pb = &c;

    pb->f();
    pa->f();
    pa->func();
}