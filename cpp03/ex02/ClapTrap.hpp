#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>
#include <cmath>

class ClapTrap{
    protected :
        std::string Name;
        unsigned int HitPoints;
        unsigned int Energy;
        unsigned int AttackDamage;
    public :
        ClapTrap();
        ClapTrap(const std::string& Name);
		ClapTrap &operator=(const ClapTrap &src);
        ClapTrap(const ClapTrap& copy);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};





#endif