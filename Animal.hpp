//
// Created by Julius on 2018-10-12.
//
#include <iostream>

#ifndef LAB_04_ANIMAL_H
#define LAB_04_ANIMAL_H


using namespace std;

class Animal {
protected:
    int age;
    double *location = new double[2];
    bool alive;
    long ID;
public:
    static long IDCount;

    Animal();

    Animal(int age, double x, double y);

    Animal(const Animal &a);

    virtual ~Animal();

    friend ostream &operator<<(ofstream &out, const Animal &c);


    virtual void move(double x, double y);

    virtual void sleep();

    virtual void eat();
};

#endif //LAB_04_ANIMAL_H
