/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:30:55 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/25 02:30:58 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Zombie.hpp"

Zombie* zombieHorde( int N, std::string name ){
    Zombie *zombies = new Zombie[N];
    for(int i = 0; i < N; i++)
        zombies[i].initZombie(name);
    return zombies;
}