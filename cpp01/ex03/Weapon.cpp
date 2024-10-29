/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:59:00 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/29 02:15:38 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

    const std::string& Weapon::getType(){
        return(Weapon::type);
    }

    void Weapon::setType(std::string Type){
        Weapon::type = Type;
    }

    Weapon::Weapon(std::string name){
        Weapon::type = name;
    }

    Weapon::Weapon(){
        Weapon::type = "no weapon";
    }
        