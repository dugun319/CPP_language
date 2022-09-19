#include <iostream>

class Person;

class Food {
private : 
    int price;
    std::string name;
public :
    Food(std::string name, int price);
    void buy();
    friend void Person::shopping(Food food);
};

class Person {
private :
    int id;
public :
    void shopping(Food food) {
        if(food.price < 1000) {
            food.buy();
        }
    }
    int get() {return id;}
};