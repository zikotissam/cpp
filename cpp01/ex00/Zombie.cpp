/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:31:32 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/25 02:31:33 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

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
