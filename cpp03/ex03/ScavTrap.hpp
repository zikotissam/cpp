#ifndef SCAVTRAP
#define SCAVTRAP
#include"ClapTrap.hpp"
class ScavTrap : virtual public ClapTrap {
    public :
        //Default constructor
        ScavTrap();

        //constructor
        ScavTrap(const std::string& name);

        //Copy constructor
        ScavTrap(const ScavTrap& copy);

        // Destructor
        ~ScavTrap();

        // Copy assignment operator
		ScavTrap &operator=(const ScavTrap &src);

        // Methods
        void guardGate();
        void attack(const std::string& target);
};
#endif