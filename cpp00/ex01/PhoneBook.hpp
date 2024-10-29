/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: zlakhdar <zlakhdar@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/22 00:58:37 by zlakhdar          #+#    #+#             */
/*   Updated: 2024/10/22 05:27:25 by zlakhdar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<iostream>
#include<string>

void GetInput(std::string prompt, std::string &input)
{
     while(input.empty())
      {
        std::cout<<prompt<<std::endl;;
        std::getline(std::cin, input);
        if(input.empty())
            std::cout<<"You Forget TO :"<<std::endl;
      }
}

void    PrintData(std::string data)
{
    int i = 0;
    if(data.length() > 10)
    {
        while(i < 9)
            std::cout<<data[i++];
        std::cout<<".";
    }
    else if(data.length() <= 10)
    {
        std::cout<<data;
        while(i < 10 - data.length())
        {
            std::cout<<" ";
            i++;
        }
    }
}

class Contact{
    public :
    std::string FirstName;
    std::string LastName;
    std::string NickName;
    std::string PhoneNumber;
    std::string DarketSecret;
};

class PhoneBook{
    private :
        Contact contacts[8];
    public :
        int place;
        bool IsFull;
        PhoneBook()
        {
            place = 0;
            IsFull = false;
        };

        
        void    PrintActions(){
            std::cout<<"Use ADD : to add a new contact"<<std::endl;
            std::cout<<"Use SEARCH : to list your contacts"<<std::endl;
            std::cout<<"Use Exit : to exit the programe"<<std::endl;
        }

        void    search(){
            int contact = 0;
            std::string chosen;
            int limit = place;
            if(!limit)
            {
                std::cout<<"!!NO SAVED DATA!!"<<std::endl;
                return ;
            }
            if(IsFull)
                limit = 7;
            std::cout<<"Index     |First Name|Last Name |Nickname  "<<std::endl;
            std::cout<<"-------------------------------------------"<<std::endl;
            while(contact < limit)
            {
                std::cout<<contact + 1<<"         |";
                PrintData(contacts[contact].FirstName);
                std::cout<<"|";
                PrintData(contacts[contact].LastName);
                std::cout<<"|";
                PrintData(contacts[contact].NickName);
                std::cout<<std::endl;
                contact++;
            }
            while(1)
            {
                std::cout<<"Choose Contact Index : "<<std::endl;
                std::getline(std::cin, chosen);
                char compare = limit + 48;
                if(chosen.empty() || chosen.length() >= 2 || !std::isdigit(chosen[0]) || chosen[0] > compare || chosen[0] < '1')
                {
                    std::cout<<"!!WRONG INDEX!!"<<std::endl;
                    continue;
                }
                break;
            }
            contact = chosen[0] - 48 - 1;
            std::cout<<"first name : "<<contacts[contact].FirstName<<std::endl;
            std::cout<<"last name : "<<contacts[contact].LastName<<std::endl;
            std::cout<<"nick name : "<<contacts[contact].NickName<<std::endl;
            std::cout<<"phone number : "<<contacts[contact].PhoneNumber<<std::endl;
            std::cout<<"darket secret : "<<contacts[contact].DarketSecret<<std::endl;
        };
        
        void    add(){
            Contact contact; 
            GetInput("Enter Your First Name ;", contact.FirstName);
            GetInput("Enter Your Last Name ;", contact.LastName);
            GetInput("Enter Your Nick Name ;", contact.NickName);
            GetInput("Enter Your Phone Number ;", contact.PhoneNumber);
            GetInput("Enter Your Dark Secret ;", contact.DarketSecret); 
            if(place == 8)
            {
                IsFull = true;                
                place = 0;
            }
            contacts[place] = contact;
            place++;
        };
};