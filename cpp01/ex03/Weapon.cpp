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
#include<iostream>

    const std::string& Weapon::getType(){
        return(type);
    }

    void Weapon::setType(const std::string &Type){
        type = Type;
    }

    Weapon::Weapon(const std::string& name) : type(name) {}

    Weapon::Weapon(){
        Weapon::type = "no weapon";
    }
