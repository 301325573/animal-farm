//
// Created by Julius on 2018-10-12.
//
#include <iostream>
#include "Bird.hpp"

using namespace std;

Bird::Bird() {
    age = 0;
    this->location[0] = 0;
    this->location[1] = 0;
};

Bird::Bird(int age, double x, double y, double z) {
    this->location[0] = x;
    this->location[1] = y;
    height = z;
}

Bird::Bird(const Bird &a) {
    this->age = a.age;
    this->ID = IDCount++;
    this->location[0] = a.location[0];
    this->location[1] = a.location[1];
    height = a.height;
    this->alive = a.alive;
};


Bird::~Bird() {
    delete[] location;
}


void Bird::move(double x, double y, double z) {
    this->location[0] = x;
    this->location[1] = y;
    height = z;
}


void Bird::sleep() {
    cout << "bird I'm sleeping!!" << endl;
}

void Bird::eat() {
    cout << "bird tasty!!!" << endl;
}



