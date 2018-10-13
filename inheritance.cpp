#include <iostream>
#include "inheritance.hpp"
using namespace std;

class Animal {
protected:
    int age;
    double *location = new double[2];
    bool alive;
    long ID;
public:
    static long IDCount;
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

    Animal(const Animal& a) : age(a.age), alive(a.alive) {
        ID = IDCount++;
        location[0] = a.location[0];
        location[1] = a.location[1];
    }

    virtual ~Animal(){
        delete[] location;
    }

    friend ostream &operator << (ofstream &out, const Animal &c);

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

class Bird: public Animal {
protected:
    double height;
public:
    Bird() {
        age = 0;
        this->location[0] = 0;
        this->location[1] = 0;
    };

    Bird(int age, double x, double y, double z) {
        this->location[0] = x;
        this->location[1] = y;
        height = z;
    }

    Bird(const Bird& a) {
        this->age = a.age;
        this->ID = IDCount++;
        this->location[0] = a.location[0];
        this->location[1] = a.location[1];
        height = a.height;
        this->alive = a.alive;
    };

    ~Bird() override {
        delete[] location;
    }


    void move(double x, double y, double z) {
        this->location[0] = x;
        this->location[1] = y;
        height = z;
    }

    friend ostream &operator << (ofstream &out, const Bird &c);

    void sleep() override {
        cout << "bird I'm sleeping!!" << endl;
    }
    void eat() override {
        cout << "bird tasty!!!" << endl;
    }


};

class Canine:public Animal {
public:
    Canine() {
        this->age = 0;
        this->location[0] = 0;
        this->location[1] = 0;
    };

    Canine(int age, double x, double y) {
        this->age = age;
        this->location[0] = x;
    };

    Canine(const Canine& c) {
        this->location[0] = c.location[0];
        this->location[1] = c.location[1];
        this->age = c.age;
        this->ID = IDCount++;
        this->alive = c.alive;
    };

    void move(double x, double y) {
        this->location[0] = x;
        this->location[1] = y;
    };

    void sleep() override {
        cout << "dog I'm sleeping!!" << endl;
    }
    void eat() override {
        cout << "dog tasty!!!" << endl;
    }

    void hunt() {
        cout << "hunting!" << endl;
    }

    friend ostream &operator << (ofstream &out, const Canine &c);

};

long Animal::IDCount = 0;

int main() {
    std::cout << "Hello, World!" << std::endl;

    Animal* canine;
    Animal* animal;
    Animal* bird;
    animal = new Animal(5, 3.3, 2.2);
    canine = new Canine(3, 6.6, 6.0);
    bird = new Bird(7, 5, 5, 5);

    animal->eat();
    animal->sleep();

    bird->eat();
    bird->sleep();

    canine->eat();
    canine->sleep();
    ((Canine*)canine)->hunt();

    return 0;
}