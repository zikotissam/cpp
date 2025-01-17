#ifndef FRAGTRAP
#define FRAGTRAP
#include"ClapTrap.hpp"
class FragTrap : virtual public ClapTrap {
    public :
        //Default constructor
        FragTrap();

        //constructor
        FragTrap(const std::string& name);

        //Copy constructor
        FragTrap(const FragTrap& copy);

        // Destructor
        ~FragTrap();

        // Copy assignment operator
		FragTrap &operator=(const FragTrap &src);

        // Methods
        void attack(const std::string& target);
        void highFivesGuys(void);
};
#endif