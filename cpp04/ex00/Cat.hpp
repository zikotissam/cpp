#ifndef CAT
#define CAT
#include "Animal.hpp"
class Cat : public Animal{
    public :
    //default constructer
        Cat();

    //destructer
        ~Cat();
    //constructer
        Cat(const std::string &type);

    //copy constructer
        Cat(const Cat& copy);

    //copy operator assignement
		Cat &operator=(const Cat &src);
    
    //method
       void makeSound()const;
};

#endif