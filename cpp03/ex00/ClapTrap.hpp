#ifndef CLAPTRAP
#define CLAPTRAP
#include <iostream>
#include <cmath>

class ClapTrap{
    private :
        std::string Name;
        unsigned int HitPoints;
        unsigned int Energy;
        unsigned int AttackDamage;
    public :
        //Default constructor
        ClapTrap();

        //constructor
        ClapTrap(const std::string& Name);

        //Copy constructor
        ClapTrap(const ClapTrap& copy);

        // Destructor
        ~ClapTrap();

        // Copy assignment operator
		ClapTrap &operator=(const ClapTrap &src);

        // Methods
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};





#endif