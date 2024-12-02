/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:12:46 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/29 03:02:22 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"
#include<iostream>

    HumanA::HumanA(std::string Name, Weapon& newWeapon): name(Name), weapon(newWeapon){}

    void HumanA::attack(){
        std::cout<<name<<"  attacks with their "<<weapon.getType()<<std::endl;
    }
