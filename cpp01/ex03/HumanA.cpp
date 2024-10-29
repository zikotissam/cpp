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

    HumanA::HumanA(std::string Name, Weapon weapon){
        HumanA::name = Name;
        HumanA::weapon = weapon; 
    }

    void HumanA::attack(){
        std::cout<<HumanA::name<<"  attacks with their "<<HumanA::weapon.getType()<<std::endl;
    }
