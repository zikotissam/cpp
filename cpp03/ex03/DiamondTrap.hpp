#ifndef DIAMONDTRAP
#define DIAMONDTRAP
#include <iostream>
#include <cmath>
#include"FragTrap.hpp"
#include"ScavTrap.hpp"


class DiamondTrap : public FragTrap, public ScavTrap{
    private :
        std::string _Name;
    public :
        //Default constructor
        DiamondTrap();

        //constructor
        DiamondTrap(const std::string& name);

        //Copy constructor
        DiamondTrap(const DiamondTrap& copy);

        // Destructor
        ~DiamondTrap();

        // Copy assignment operator
		DiamondTrap &operator=(const DiamondTrap &src);

        // Methods
        void attack(const std::string& target);
        void whoAmI();
};




#endif