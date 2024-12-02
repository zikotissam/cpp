/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 23:24:00 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/12/01 22:06:40 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>

int main(int ac, char **av)
{
    if (ac == 4)
    {
        std::string line;
        std::string newfile = av[1];
        std::ifstream inputFile(av[1]);
        std::string s1 = av[2];
        std::string s2 = av[3];
        newfile += ".replace";
        std::ofstream outputFile(newfile.c_str());
        std::string::size_type lenght = s1.size();
        
        if (!inputFile || !outputFile) {
            std::cerr << "Error: Could not open the file." << std::endl;
            return 1;
        }

        while(std::getline(inputFile, line))
        {
            std::string::size_type start;
            std::string::size_type pos = 0;
            while((start = line.find(s1, pos)) != std::string::npos && s1 != s2)
            {
                line.erase(start, lenght);
                line.insert(start, s2);
                pos = start + lenght;
            }
            outputFile << line << std::endl;
        }
        inputFile.close();
        outputFile.close();
    }
    else
        std::cerr<<"you must write your command as follow : ./replace filename string1 string2"<<std::endl;
    return 0;
}