#include"Dog.hpp"

Dog::Dog():_type("Dog"){}
Dog::Dog(const std::string& type):Animal("anything"){_type = type;}
Dog::Dog(const Dog& copy): Animal(copy){*this = copy;}
void Dog::makeSound(){std::cout<<"Bark Bark !!"<<std::endl;}
Dog& Dog::operator=(const Dog &src){
    if(&src != this)
        _type = src._type;
    return *this;
}
