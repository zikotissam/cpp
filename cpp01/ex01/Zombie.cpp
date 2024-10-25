#include"Zombie.hpp"

void Zombie::announce( void ){
    std::cout<<Zombie::name<<": BraiiiiiiinnnzzzZ..."<<std::endl;
}
Zombie::Zombie(){
    Zombie::name = "unamed";
}
Zombie::~Zombie(){
    std::cout<<Zombie::name<<": destroyed"<<std::endl;
}
