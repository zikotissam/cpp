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
#include "Weapon.hpp"

    HumanB::HumanB(std::string Name){
        name = Name;
        weapon = NULL;
    }
    HumanB::HumanB(){
        name = "uknown"; 
        weapon = NULL;
    }
    void HumanB::attack(){
        if(weapon)
            std::cout<<name<<"  attacks with their "<<weapon->getType()<<std::endl;
        else
            std::cout<<name<<" have no weapon "<<std::endl;
    }
    void HumanB::setWeapon(Weapon& newWeapon) {
        weapon = &newWeapon;
    }

