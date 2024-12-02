/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/01 22:21:55 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/12/02 01:41:30 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"Harl.hpp"
int main(int ac, char **av){
    Harl harl;
    std::string levels[4] = {"ERROR","WARNING", "INFO" , "DEBUG"};
    int level = 0;
    switch(ac)
    {
        case 2:
            while(level < 4)
            {
                if(levels[level] == av[1])
                    break;
                level++;
            }
            while(level >= 0)
            {
                switch (level)
                {
                    case 3:
                        harl.complain("DEBUG");
                        level--;
                        break;
                    case 2:
                        harl.complain("INFO");
                        level--;
                        break;
                    case 1:
                        harl.complain("WARNING");
                        level--;
                        break;
                    case 0:
                        harl.complain("ERROR");
                        level--;
                        break;
                    case 4:
                        std::cout<<"[ Probably complaining about insignificant problems ]"<<std::endl;
                        return 0;
                    default:
                        break;
                }
                std::cout<<std::endl;
            }
            break;
        default:
            std::cout<<"i take only two arguments :-)"<<std::endl;
            break;
    }
}