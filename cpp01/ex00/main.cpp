#include"Zombie.hpp"

int main()
{
    Zombie *zombie = newZombie("abdillah");
    randomChump("reda");
    zombie->announce();
    delete zombie;
}