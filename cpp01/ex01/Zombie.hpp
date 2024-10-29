/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:30:49 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/25 02:30:50 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include<iostream>

class Zombie{
    private :
        std::string name;
    public :
        void announce( void );
        void initZombie(std::string Name);
        Zombie();
        ~Zombie();
};
Zombie* zombieHorde( int N, std::string name );