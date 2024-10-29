/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   randomChump.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:31:27 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/25 02:31:28 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include"Zombie.hpp"
 
 void randomChump( std::string name ){
    Zombie zombie(name);
    zombie.announce();
 }
