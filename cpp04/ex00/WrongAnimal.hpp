#ifndef WRONGANIMAL
#define WRONGANIMAL
#include <iostream>
#include <cmath>

class WrongAnimal{
    protected :
        std::string _type;
    public :
    //default constructer
        WrongAnimal();
    
    //destructer
        ~WrongAnimal();

    //constructer
        WrongAnimal(const std::string &type);

    //copy constructer
        WrongAnimal(const WrongAnimal& copy);

    //copy operator assignement
		WrongAnimal &operator=(const WrongAnimal &src);
    
    //method
        std::string getType()const;
        void makeSound()const;
};

#endif