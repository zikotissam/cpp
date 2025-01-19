#ifndef ANIMAL
#define ANIMAL
#include <iostream>
#include <cmath>

class Animal{
    protected :
        std::string _type;
    public :
    //default constructer
        Animal();
    
    //constructer
        Animal(const std::string &type);

    //copy constructer
        Animal(const Animal& copy);

    //copy operator assignement
		Animal &operator=(const Animal &src);
    
    //method
        std::string getType()const;
       virtual void makeSound()const;
};

#endif