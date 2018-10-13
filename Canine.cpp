//
// Created by Julius on 2018-10-12.
//

#include "Canine.hpp"

Canine::Canine() {
    this->age = 0;
    this->location[0] = 0;
    this->location[1] = 0;
};

Canine::Canine(int age, double x, double y) {
    this->age = age;
    this->location[0] = x;
};

Canine::Canine(const Canine &c) {
    this->location[0] = c.location[0];
    this->location[1] = c.location[1];
    this->age = c.age;
    this->ID = IDCount++;
    this->alive = c.alive;
};

void Canine::move(double x, double y) {
    this->location[0] = x;
    this->location[1] = y;
};

void Canine::sleep() {
    cout << "dog I'm sleeping!!" << endl;
}

void Canine::eat() {
    cout << "dog tasty!!!" << endl;
}

void Canine::hunt() {
    cout << "hunting!" << endl;
}
