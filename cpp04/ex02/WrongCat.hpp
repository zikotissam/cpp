#ifndef WRONGCAT
#define WRONGCAT
#include "WrongAnimal.hpp"
class WrongCat : public WrongAnimal{
    public :
    //default constructer
        WrongCat();

    //destructer
        ~WrongCat();
    //constructer
        WrongCat(const std::string &type);

    //copy constructer
        WrongCat(const WrongCat& copy);

    //copy operator assignement
		WrongCat &operator=(const WrongCat &src);
    
    //method
       void makeSound()const;
};

#endif