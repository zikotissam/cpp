#include"WrongCat.hpp"

WrongCat::WrongCat():WrongAnimal("WrongCat"){}
WrongCat::~WrongCat(){}
WrongCat::WrongCat(const std::string& type):WrongAnimal(type){}
WrongCat::WrongCat(const WrongCat& copy): WrongAnimal(copy){*this = copy;}
void WrongCat::makeSound()const{std::cout<<"Meao Meao !!"<<std::endl;}
WrongCat& WrongCat::operator=(const WrongCat &src){
    if(&src != this)
        _type = src._type;
    return *this;
}
