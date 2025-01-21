#include"WrongAnimal.hpp"

WrongAnimal::WrongAnimal():_type("uknown"){}
WrongAnimal::~WrongAnimal(){}
WrongAnimal::WrongAnimal(const std::string& type):_type(type){}
WrongAnimal::WrongAnimal(const WrongAnimal& copy){*this = copy;}
std::string WrongAnimal::getType()const{return _type;}
void WrongAnimal::makeSound()const{std::cout<<"Wronganimal sound"<<std::endl;}
WrongAnimal& WrongAnimal::operator=(const WrongAnimal &src){
    if(&src != this)
        _type = src._type;
    return *this;
}

