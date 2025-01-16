#ifndef FRAGTRAP
#define FRAGTRAP
#include"ClapTrap.hpp"
class FragTrap : public ClapTrap {
    public :
        ~FragTrap();
        FragTrap();
        FragTrap(const std::string& name);
        void attack(const std::string& target);
        void highFivesGuys(void);
};
#endif