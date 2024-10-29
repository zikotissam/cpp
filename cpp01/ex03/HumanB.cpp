/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:25:16 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/29 02:47:11 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanB.hpp"

    HumanB::HumanB(std::string Name){
        HumanB::name = Name; 
    }
    HumanB::HumanB(){
        HumanB::name = "uknown"; 
    }
    void HumanB::attack(){
        std::cout<<name<<"  attacks with their "<<weapon->getType()<<std::endl;
    }
    void HumanB::setWeapon(Weapon& newWeapon) {
        weapon = &newWeapon;
    }

