#include"FragTrap.hpp"

FragTrap::FragTrap(){
    Name = "Uknown";
    HitPoints = 100;
    Energy = 100;
    AttackDamage = 30;
    std::cout<<"FragTrap Default constructer Called ;)"<<std::endl;
}
FragTrap::~FragTrap(){std::cout<<"FragTrap Destructer Called :("<<std::endl;}
FragTrap::FragTrap(const std::string& name){
    Name = name;
    HitPoints = 100;
    Energy = 100;
    AttackDamage = 30;
    std::cout<<"FragTrapv constructer Called :)"<<std::endl;
}

void FragTrap::highFivesGuys(){
    std::cout<<" FragTrap "<<Name<<" is askin for high Five :0"<<std::endl;
}
void FragTrap::attack(const std::string& target){
    if(HitPoints && Energy)
    {
        std::cout<<"FragTrap "<<Name<<" attacks "<<target<<" , causing "<<AttackDamage<<" points of damage!"<<std::endl;
        Energy--;
    }
    if(!HitPoints)
        std::cout<<"cant Attack beacause obviously im DEAAAAAAAAAAAAAAAD >:<"<<std::endl;
    else if(!Energy)
        std::cout<<"cant Attack no Energy :("<<std::endl;
}