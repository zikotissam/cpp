#include"Cat.hpp"

Cat::Cat():Animal("Cat"){}
Cat::~Cat(){}
Cat::Cat(const std::string& type):Animal(type){}
Cat::Cat(const Cat& copy): Animal(copy){*this = copy;}
void Cat::makeSound()const{std::cout<<"Meao Meao !!"<<std::endl;}
Cat& Cat::operator=(const Cat &src){
    if(&src != this)
        _type = src._type;
    return *this;
}
