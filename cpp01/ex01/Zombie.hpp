#include<iostream>

class Zombie{
    private :
        std::string name;
    public :
        void announce( void );
        void initZombie(std::string Name);
        Zombie();
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );