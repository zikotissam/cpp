#include"ClapTrap.hpp"
ClapTrap::ClapTrap():Name("Uknown"),HitPoints(10), Energy(10), AttackDamage(0) {std::cout<<"Default constructer Called ;)"<<std::endl;}
ClapTrap::~ClapTrap(){std::cout<<"Destructer Called :("<<std::endl;}
ClapTrap::ClapTrap(const std::string& Name):Name(Name),HitPoints(10), Energy(10), AttackDamage(0){std::cout<<"constructer Called :)"<<std::endl;}
ClapTrap::ClapTrap(const ClapTrap& copy){*this = copy; std::cout<<"copy constructor Called :<O"<<std::endl;}
ClapTrap &ClapTrap::operator=(const ClapTrap &src){
    if(this != &src)
    {
        this->Name = src.Name;
        this->HitPoints = src.HitPoints;
        this->Energy = src.Energy;
        this->AttackDamage = src.AttackDamage;
    }
    std::cout<<"Copy assignment operator Called >=<:O"<<std::endl;
    return *this;
}
void ClapTrap::attack(const std::string& target){
    if(HitPoints && Energy)
    {
        std::cout<<"ClapTrap "<<Name<<" attacks "<<target<<" , causing "<<AttackDamage<<" points of damage!"<<std::endl;
        Energy--;
    }
    if(!HitPoints)
        std::cout<<"cant Attack beacause obviously im DEAAAAAAAAAAAAAAAD >:<"<<std::endl;
    else if(!Energy)
        std::cout<<"cant Attack no Energy :("<<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount){
    if(HitPoints >= amount)
    {
        HitPoints -= amount;
        std::cout<<Name<<" take "<<amount<<" of Damage :("<<std::endl;
    }
    else if(HitPoints > 0)
    {
        HitPoints = 0;
        std::cout<<Name<<"is Dead XO"<<std::endl;
    }
    else
        std::cout<<"C mon bruh ! im DEAAAAAAAAAD >:("<<std::endl;
}

void ClapTrap::beRepaired(unsigned int amount){
    if(Energy && HitPoints)
    {
        if(HitPoints + amount > 10)
            HitPoints = 10;
        else
            HitPoints += amount;
        Energy--;
        std::cout<<Name<<" Repaired "<<amount<<" point"<<std::endl;
    }
    if(!HitPoints)
        std::cout<<"cant Repaired beacause obviously im DEAAAAAAAAAAAAAAAD >:<"<<std::endl;
    else if(!Energy)
        std::cout<<"cant Repaired no Energy :("<<std::endl;
}
