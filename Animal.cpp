//
// Created by Julius on 2018-10-12.
//

#include "Animal.hpp"
#include <iostream>

using namespace std;


    Animal::Animal() {
        ID = IDCount++;
        age = 0;
        alive = true;
        location[0] = 0;
        location[1] = 0;
    };

    Animal::Animal(int age, double x, double y) {
        ID = IDCount++;
        this->age = age;
        alive = true;
        location[0] = x;
        location[1] = y;
    }

    Animal::Animal(const Animal &a) : age(a.age), alive(a.alive) {
        ID = IDCount++;
        location[0] = a.location[0];
        location[1] = a.location[1];
    }

    Animal::~Animal() {
        delete[] location;
    }


    void Animal::move(double x, double y) {
        location[0] = x;
        location[1] = y;
    }

    void Animal::sleep() {
        cout << "I'm sleeping!" << endl;
    }

    void Animal::eat() {
        cout << "tasty!!" << endl;
    }
