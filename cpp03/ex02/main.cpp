#include"ClapTrap.hpp"
#include"ScavTrap.hpp"
#include"FragTrap.hpp"
int main(){
    ClapTrap Max("MAX");
    ScavTrap Jhon("Jhon");
    FragTrap Nick("Nick");
    Max.attack("Jhon");
    Jhon.takeDamage(0);
    Jhon.attack("MAX");
    Jhon.guardGate();
    Max.takeDamage(20);
    Nick.attack("Jhon");
    Nick.attack("MAX");
    Max.beRepaired(10);
    Nick.highFivesGuys();

}