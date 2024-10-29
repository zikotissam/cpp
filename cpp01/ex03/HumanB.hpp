/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:23:28 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/29 02:46:27 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB
#define HUMANB
#include "Weapon.hpp"

class HumanB{
  private :
    std::string name;
    Weapon *weapon;
  public :
    HumanB(std::string Name);
    HumanB();
    void setWeapon(Weapon& newWeapon);
    void attack();
};
#endif