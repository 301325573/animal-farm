//
// Created by Julius on 2018-10-12.
//

#ifndef LAB_04_CANINE_HPP
#define LAB_04_CANINE_HPP

#include "Animal.hpp"


class Canine : public Animal {
public:
    Canine();

    Canine(int age, double x, double y);

    Canine(const Canine &c);

    void move(double x, double y);

    void sleep() override;

    void eat() override;

    void hunt();

    friend ostream &operator<<(ofstream &out, const Canine &c);

};


#endif //LAB_04_CANINE_HPP
