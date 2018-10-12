#include <iostream>
#include "inheritance.hpp"
using namespace std;

class Animal {
private:
    int age;
    static long IDCount;
    double *location = new double[2];
    bool alive;
    long ID;
public:
    Animal() {
        ID = IDCount++;
        age = 0;
        alive = true;
        location[0] = 0;
        location[1] = 0;
    };

    Animal(int age, double x, double y) {
        ID = IDCount++;
        this->age = age;
        alive = true;
        location[0] = x;
        location[1] = y;
    }

    Animal(const Animal& a) : age(a.age), ID(a.ID), alive(a.alive) {
        alive = a.alive;
        location[0] = a.location[0];
        location[1] = a.location[1];
    }

    virtual ~Animal(){};

    virtual void move(double x, double y) {
        location[0] = x;
        location[1] = y;
    }
    virtual void sleep() {
        cout << "I'm sleeping!" << endl;
    }
    virtual void eat() {
        cout << "tasty!!" << endl;
    }

};

int main() {
    std::cout << "Hello, World!" << std::endl;
    return 0;
}