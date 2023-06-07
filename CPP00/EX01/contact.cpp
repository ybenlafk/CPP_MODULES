/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:09:05 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/07 14:26:24 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

Contact::Contact()
{
    std::cout << "Contact created" << std::endl;
}
Contact::~Contact()
{
    return ;
}

std::string Contact::get_first_name(void)
{
    std::string s;
    if (first_name.length() > 10)
        return(first_name.substr(0, 9) + ".");
    else if (first_name.length() <= 10)
        return (first_name);
    return (first_name);
}

std::string Contact::get_last_name(void)
{
    std::string s;
    if (last_name.length() > 10)
        return(last_name.substr(0, 9) + ".");
    else if (last_name.length() <= 10)
        return (last_name);
    return (last_name);
}

 std::string Contact::get_nickname(void)
{
    std::string s;
    if (nickname.length() > 10)
        return(nickname.substr(0, 9) + ".");
    else if (nickname.length() <= 10)
        return (nickname);
    return (nickname);
}

int        Contact::get_index(void)
{
    return (index);
}

std::string Contact::get_in(std::string s)
{
    std::string in;
    
    std::cout << s;
    std::getline(std::cin, in);
    return (in);
}

void    Contact::fill_contact(int index)
{
    std::cin.ignore();
    first_name = get_in("First name :\n");
    last_name = get_in("Last name :\n");
    nickname = get_in("Nickname:\n");
    phone_number = get_in("Phone number :\n");
    darkest_secret = get_in("Darkest secret :\n");
    if (first_name == "" || last_name == "" || nickname == "" || phone_number == "" || darkest_secret == "")
    {
        first_name = "";
        last_name = "";
        nickname = "";
        phone_number = "";
        darkest_secret = "";
        std::cout << "Error: Empty field" << std::endl;
    }
    this->index = index;
}

void    Contact::print_contact()
{
    std::cout << "--------------------------" << std::endl;
    std::cout << "   Contact Informations   " << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Name: " << first_name << " " << last_name << std::endl;
    std::cout << "Nickname: " << nickname << std::endl;
    std::cout << "Phone Number: " << phone_number << std::endl;
    std::cout << "Darkest Secret: " << darkest_secret << std::endl;
    std::cout << "Index: " << index << std::endl;
    std::cout << "--------------------------" << std::endl;
}
