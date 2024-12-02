/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 22:13:05 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/12/01 22:30:02 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"

void Harl::Debug(void)
{
    std::cout << "[ DEBUG ]" << std::endl;
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::Info(void)
{
    std::cout << "[ INFO ]" << std::endl;
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger! "
              << "If you did, I wouldn't be asking for more!" << std::endl;
}

void Harl::Warning(void)
{
    std::cout << "[ WARNING ]" << std::endl;
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years "
              << "whereas you started working here since last month." << std::endl;
}

void Harl::Error(void)
{
    std::cout << "[ ERROR ]" << std::endl;
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}
void Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "WARNING", "ERROR", "INFO"};
    PointerToMember methods[4] = {
        &Harl::Debug,
        &Harl::Warning,
        &Harl::Error,
        &Harl::Info};
        
    for (int i = 0; i < 4; ++i)
    {
        if (levels[i] == level)
        {
            (this->*methods[i])();
            return;
        }
    }
    std::cout<<"the level you choose not included"<<std::endl;
}
