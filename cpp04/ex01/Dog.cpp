#include"Dog.hpp"

Dog::Dog():Animal("Dog"){brain = new Brain(); if(!brain){std::cerr<<"alloDogion failed "<<std::endl; exit(1);}std::cout<<"Dog Default Constructer called"<<std::endl;}
Dog::~Dog(){delete brain;std::cout<<"Dog destructor called"<<std::endl;}
Dog::Dog(const std::string& type):Animal(type){brain = new Brain(); if(!brain){std::cerr<<"alloDogion failed "<<std::endl; exit(1);}std::cout<<"Dog Constructer called"<<std::endl;}
Dog::Dog(const Dog& copy): Animal(copy){*this = copy;std::cout<<"Dog copy Constructer called"<<std::endl;}
void Dog::makeSound()const{std::cout<<"Bark Bark !!"<<std::endl;}
Dog& Dog::operator=(const Dog &src){
    if(&src != this)
    {
        _type = src._type;
        this->brain = new Brain();
        if(!this->brain)
        {
            std::cerr<<"alloDogion failed"<<std::endl;
            exit(1);
        }
            this->brain = src.brain;
    }
    return *this;
}
void Dog::setIdea(const int &i, const std::string &idea)
{
    this->brain->setIdea(i, idea);
}
void Dog::getIdeas()const{
    std::string temp;
    for(int i = 0; i < 100; i++)
    {
        temp = this->brain->getIdea(i);
        if(temp != "INVALID")
            std::cout<<"Dog idea is : "<<temp<<std::endl;
    }
}
