#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
int main(){
    ClapTrap Max("MAX");
    ScavTrap Jhon("Jhon");
    Max.attack("Jhon");
    Jhon.takeDamage(0);
    Jhon.attack("MAX");
    Max.takeDamage(20);
}