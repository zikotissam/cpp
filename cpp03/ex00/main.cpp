#include"ClapTrap.hpp"
int main(){
    ClapTrap Max("MAX");
    ClapTrap Uknown;
    Max.attack("Uknown");
    Max.takeDamage(10);
    Max.beRepaired(5);
}