#include"DiamondTrap.hpp"

DiamondTrap::~DiamondTrap(){std::cout<<"DiamondTrap Destructer Called :("<<std::endl;}

DiamondTrap::DiamondTrap(){
    _Name = "Uknown";
    HitPoints = FragTrap::HitPoints;
    Energy = ScavTrap::Energy;
    AttackDamage = FragTrap::AttackDamage;
    std::cout<<"DiamondTrap Default constructer Called ;)"<<std::endl;
}
DiamondTrap::DiamondTrap(const std::string& name){
    _Name = name;
    ClapTrap::Name += "_clap_name";
    HitPoints = FragTrap::HitPoints;
    Energy = ScavTrap::Energy;
    AttackDamage = FragTrap::AttackDamage;
    std::cout<<"DiamondTrap Default constructer Called ;)"<<std::endl;
}

DiamondTrap::DiamondTrap(const DiamondTrap& copy): ClapTrap(copy), FragTrap(copy), ScavTrap(copy){*this = copy;}

void DiamondTrap::attack(const std::string& target){
    ScavTrap::attack(target);
}
void DiamondTrap::whoAmI(){
    std::cout<<"My Name is "<<_Name<<" and ClapTrap Name is "<<ClapTrap::Name<<std::endl;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src){
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