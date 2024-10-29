/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:10:34 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/22 19:06:43 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cctype>

int main(int ac, char **av)
{
    if(ac == 1)
        std::cout<<"* LOUD AND UNBEARABLE FEEDBACK NOISE *"<<std::endl;
    else
    {
        int i = 1;
        int j = 0;
        while(av[i])
        {
            while(av[i][j])
            {
                if(std::isalpha(av[i][j]) && !isupper(av[i][j]))
                    std::cout<<(char)std::toupper(av[i][j]);
                else
                    std::cout<<av[i][j];
                j++;
            }
            i++;
            j = 0;
        }
    }
    return 0;
}