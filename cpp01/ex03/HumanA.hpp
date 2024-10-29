/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/29 02:09:54 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/29 03:02:29 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA
#define HUMANA
#include "Weapon.hpp"

class HumanA{
  private :
    std::string name;
    Weapon weapon;
  public :
    HumanA(std::string Name, Weapon newWeapon);
    HumanA();
    void attack();
};
#endif