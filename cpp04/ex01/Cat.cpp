#include"Cat.hpp"

Cat::Cat():Animal("Cat"){brain = new Brain(); if(!brain){std::cerr<<"allocation failed "<<std::endl; exit(1);}std::cout<<"Cat Default Constructer called"<<std::endl;}
Cat::~Cat(){delete brain;std::cout<<"Cat destructor called"<<std::endl;}
Cat::Cat(const std::string& type):Animal(type){brain = new Brain(); if(!brain){std::cerr<<"allocation failed "<<std::endl; exit(1);}std::cout<<"Cat Constructer called"<<std::endl;}
Cat::Cat(const Cat& copy): Animal(copy){*this = copy;std::cout<<"Cat copy Constructer called"<<std::endl;}
void Cat::makeSound()const{std::cout<<"Meao Meao !!"<<std::endl;}
Cat& Cat::operator=(const Cat &src){
    if(&src != this)
    {
        _type = src._type;
        this->brain = new Brain();
        if(!this->brain)
        {
            std::cerr<<"allocation failed"<<std::endl;
            exit(1);
        }
            this->brain = src.brain;
    }
    return *this;
}
void Cat::setIdea(const int &i,const std::string &idea)
{
    this->brain->setIdea(i, idea);
}
void Cat::getIdeas()const{
    std::string temp;
    for(int i = 0; i < 100; i++)
    {
        temp = this->brain->getIdea(i);
        if(temp != "INVALID")
            std::cout<<"Cat idea is : "<<temp<<std::endl;
    }
}
