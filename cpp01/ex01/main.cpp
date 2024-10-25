#include"Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(15, "abdillah");

    for(int i = 0; i < 15; i++)
        zombie[i]->announce();
    delete[] zombie;
}