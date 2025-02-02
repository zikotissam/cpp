/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 22:08:52 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/12/06 22:57:28 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HARL
#define HARL
#include<iostream>

class Harl{
    private:
        void Debug(void);
        void Info(void);
        void Warning(void);
        void Error(void);
    public :
        typedef void (Harl::*PointerToMember)(void);
        void complain(std::string level);
};
#endif