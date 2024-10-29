/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/25 02:31:36 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/25 02:31:37 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>

class Zombie{
    private :
        std::string name;
    public :
        void announce( void );
        Zombie(std::string Name);
        ~Zombie();
};

 void randomChump( std::string name );
Zombie* newZombie( std::string name );