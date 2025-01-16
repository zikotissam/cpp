#ifndef SCAVTRAP
#define SCAVTRAP
#include"ClapTrap.hpp"
class ScavTrap : public ClapTrap {
    public :
        ~ScavTrap();
        ScavTrap();
        ScavTrap(const std::string& name);
        void guardGate();
        void attack(const std::string& target);
};
#endif
