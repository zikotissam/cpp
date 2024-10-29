/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:30:33 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/25 02:31:07 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Zombie.hpp"

int main()
{
    Zombie *zombie = zombieHorde(15, "abdillah");

    for(int i = 0; i < 15; i++)
        zombie[i].announce();
    delete[] zombie;
}