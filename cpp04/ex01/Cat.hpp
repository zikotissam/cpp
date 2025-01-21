#ifndef CAT
#define CAT
#include "Animal.hpp"
#include "Brain.hpp"
class Cat : public Animal{
    private :
        Brain *brain;
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
       void setIdea(const int &i, const std::string &idea);
       void getIdeas()const;
};

#endif