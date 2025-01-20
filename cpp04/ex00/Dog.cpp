#include"Dog.hpp"

Dog::Dog():Animal("Dog"){}
Dog::~Dog(){}
Dog::Dog(const std::string& type):Animal(type){}
Dog::Dog(const Dog& copy): Animal(copy){*this = copy;}
void Dog::makeSound()const{std::cout<<"Bark Bark !!"<<std::endl;}
Dog& Dog::operator=(const Dog &src){
    if(&src != this)
        _type = src._type;
    return *this;
}
