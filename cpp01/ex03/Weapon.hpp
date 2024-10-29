/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 01:53:52 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/29 02:33:39 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON
#define WEAPON

#include<iostream>

class Weapon{
  private :
    std::string type;
  public :
    Weapon(std::string name);
    Weapon();
    const std::string& getType();
    void setType(std::string Type);
};
#endif