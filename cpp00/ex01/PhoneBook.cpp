/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 02:44:36 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/22 04:00:12 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

int main()
{
    PhoneBook phonebook;
    std::string action; 
    while(1)
    {
        phonebook.PrintActions();
        std::getline(std::cin, action);
        if(action == "ADD")
        {
            phonebook.add();
            continue;            
        }
        if(action == "SEARCH")
        {
            phonebook.search();
            continue;            
        }
        if(action == "EXIT")
        {
            std::cout<<"exit the programe"<<std::endl;
            break;            
        }
        std::cout<<"!!WRONG OPTION!!"<<std::endl;
    }
}