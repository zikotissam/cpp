#include"Brain.hpp"

Brain::Brain(){std::cout<<"Brain Default constructer"<<std::endl;}
Brain::~Brain(){std::cout<<"Brain destructer"<<std::endl;}
Brain::Brain(const Brain& copy){*this = copy; std::cout<<"Brain Copy constructer"<<std::endl;}
std::string Brain::getIdea(const int &i)const{if(i >= 100 || i < 0 || ideas[i].empty()){return "INVALID";} return ideas[i];}
void Brain::setIdea(const int &i, const std::string &ide){if(i < 100 && i >= 0){ideas[i] = ide;}}
Brain& Brain::operator=(const Brain &src){
    if(&src != this)
    {
        for(int i = 0; i < 100; i++)
            this->ideas[i] = src.ideas[i];
    }
    return *this;
}

