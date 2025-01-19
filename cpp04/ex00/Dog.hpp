#ifndef DOG
#define DOG
#include "Animal.hpp"

class Dog : public Animal{
    protected :
        std::string _type;
    public :
    //default constructer
        Dog();
    
    //constructer
        Dog(const std::string &type);

    //copy constructer
        Dog(const Dog& copy);

    //copy operator assignement
		Dog &operator=(const Dog &src);
    
    //method
    void makeSound();
};

#endif