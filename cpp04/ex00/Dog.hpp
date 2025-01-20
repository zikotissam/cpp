#ifndef DOG
#define DOG
#include "Animal.hpp"

class Dog : public Animal{
    public :
    //default constructer
        Dog();
    
    //destructer
        ~Dog();

    //constructer
        Dog(const std::string &type);

    //copy constructer
        Dog(const Dog& copy);

    //copy operator assignement
		Dog &operator=(const Dog &src);
    
    //method
       void makeSound()const;
};

#endif