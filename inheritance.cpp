#include <iostream>
#include "inheritance.hpp"
#include "Animal.hpp"
#include "Bird.hpp"
#include "Canine.hpp"
using namespace std;


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