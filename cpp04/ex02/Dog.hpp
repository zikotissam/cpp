#ifndef DOG
#define DOG
#include "Animal.hpp"
#include "Brain.hpp"
class Dog : public Animal{
    private :
        Brain *brain;
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
       void setIdea(const int &i, const std::string &idea);
       void getIdeas()const;
};

#endif