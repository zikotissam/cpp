#include<iostream>

class Zombie{
    private :
        std::string name;
    public :
        void announce( void );
        Zombie(std::string Name);
        ~Zombie();
};

 void randomChump( std::string name );
Zombie* newZombie( std::string name );