#include"ScavTrap.hpp"

ScavTrap::ScavTrap(){
    Name = "Uknown";
    HitPoints = 100;
    Energy = 50;
    AttackDamage = 20;
    std::cout<<"ScavTrap Default constructer Called ;)"<<std::endl;
}
ScavTrap::~ScavTrap(){std::cout<<"ScavTrap Destructer Called :("<<std::endl;}
ScavTrap::ScavTrap(const std::string& name){
    Name = name;
    HitPoints = 100;
    Energy = 50;
    AttackDamage = 20;
    std::cout<<"ScavTrapv constructer Called :)"<<std::endl;
}

void ScavTrap::guardGate(){
    std::cout<<" ScavTrap is now in Gate keeper mode."<<std::endl;
}
void ScavTrap::attack(const std::string& target){
    if(HitPoints && Energy)
    {
        std::cout<<"ScavTrap "<<Name<<" attacks "<<target<<" , causing "<<AttackDamage<<" points of damage!"<<std::endl;
        Energy--;
    }
    if(!HitPoints)
        std::cout<<"cant Attack beacause obviously im DEAAAAAAAAAAAAAAAD >:<"<<std::endl;
    else if(!Energy)
        std::cout<<"cant Attack no Energy :("<<std::endl;
}