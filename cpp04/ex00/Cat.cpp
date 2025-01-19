#include"Cat.hpp"

Cat::Cat():Animal("Cat"), _type("Cat"){}
Cat::Cat(const std::string& type):Animal("Cat"){_type = type;}
Cat::Cat(const Cat& copy): Animal(copy){*this = copy;}
void Cat::makeSound(){std::cout<<"Meao Meao !!"<<std::endl;}
Cat& Cat::operator=(const Cat &src){
    if(&src != this)
        _type = src._type;
    return *this;
}
