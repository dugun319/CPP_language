#include <iostream>

class Base {
public:
    Base() {std::cout<<"Base Constructor is called"<<std::endl;}
	virtual ~Base() { std::cout << "~Base()" << std::endl; } // 가상 소멸자
};

class Derived: public Base {
public:
    Derived() {std::cout<<"Derived Constructor is called"<<std::endl;}
	virtual ~Derived() { std::cout << "~Derived()" << std::endl; } // 가상 소멸자
};

/*
template <typename T5>
class Container {
private :
    T* p;
    int size;
public :
    Container(int n) {
        this->p = new int[n];
        this->size = n;
    }
    ~Container() {
        delete [] p;
    }
    void set(int index, T value) {p[index] = value;}
    T get(int index) { return p[index];}
};
*/

template <typename T> 
bool equal(T a, T b) {
    if(a == b) {
        std::cout<<"typename"<<std::endl;
        return true;
    }
    else {
        std::cout<<"typename"<<std::endl;
        return false;
    }
}

bool equal(int a, int b) {
    if(a == b){
        std::cout<<"int"<<std::endl;
        return true;
    }
    else {
        std::cout<<"int"<<std::endl;
        return false;
    }
}

template <typename T4>
void show(T4 a) {
    std::cout<<a<<std::endl;
}

void show(int a) {
    std::cout<<"show(int a) = "<<a<<std::endl;
}

/*
template <typename t1, typename t2, typename t3>
void insert(t1 a, t2 b[], t3 index) {
    b[index] = a;
}
*/

int main() {
    double a = 3.14;
    double b = 3.11;


    std::cout<<equal(3.11,3.14)<<std::endl;
    std::cout<<equal(3, 3)<<std::endl;
    std::cout<<equal(3, 5)<<std::endl;

    show(3.14);
    show(3);

    std::cout<<"Derived *dp  = new Derived()"<<std::endl;
    Derived *dp  = new Derived();

    std::cout<<"Base *bp = new Derived()"<<std::endl;
	Base *bp = new Derived();

    std::cout<<"Base *bp2 = new Base()"<<std::endl;
    Base *bp2 = new Base();

    std::cout<<"Delete dp"<<std::endl;
    delete dp;

    std::cout<<"Delete bp"<<std::endl;
    delete bp;

    std::cout<<"Delete bp2"<<std::endl;
    delete bp2;


}