//
// Created by Julius on 2018-10-12.
//

#ifndef LAB_04_BIRD_HPP
#define LAB_04_BIRD_HPP

#include "Animal.hpp"


using namespace std;

class Bird : public Animal {
protected:
    double height;
public:
    Bird();

    Bird(int age, double x, double y, double z);

    Bird(const Bird &a);

    ~Bird() override;

    friend ostream &operator<<(ofstream &out, const Bird &c);


    void move(double x, double y, double z);

    void sleep() override;

    void eat() override;

};


#endif //LAB_04_BIRD_HPP
