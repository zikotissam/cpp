#include"Animal.hpp"

Animal::Animal():_type("uknown"){}
Animal::~Animal(){}
Animal::Animal(const std::string& type):_type(type){}
Animal::Animal(const Animal& copy){*this = copy;}
std::string Animal::getType()const{return _type;}
void Animal::makeSound()const{std::cout<<"animal sound"<<std::endl;}
Animal& Animal::operator=(const Animal &src){
    if(&src != this)
        _type = src._type;
    return *this;
}

