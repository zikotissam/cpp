#ifndef CAT
#define CAT
#include "Animal.hpp"
class Cat : public Animal{
    protected :
        std::string _type;
    public :
    //default constructer
        Cat();
    
    //constructer
        Cat(const std::string &type);

    //copy constructer
        Cat(const Cat& copy);

    //copy operator assignement
		Cat &operator=(const Cat &src);
    
    //method
        void makeSound();
};

#endif