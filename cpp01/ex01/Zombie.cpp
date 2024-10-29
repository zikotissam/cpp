/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:30:42 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/25 02:31:04 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
void Zombie::initZombie(std::string Name){
    Zombie::name = Name;
}
