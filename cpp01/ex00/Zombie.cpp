#include"Zombie.hpp"

void Zombie::announce( void ){
    std::cout<<Zombie::name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::Zombie( std::string Name ){
    Zombie::name = Name;
}
Zombie::~Zombie(){
    std::cout<<Zombie::name<<": destroyed"<<std::endl;
}
