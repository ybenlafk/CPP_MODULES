/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:09:05 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/05/29 18:51:36 by ybenlafk         ###   ########.fr       */
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

std::string Contact::get_in(std::string s)
{
    std::cout << s;
    std::string in;
    std::cin >> in;
    return (in);
}

void    Contact::fill_contact(int index)
{
    this->first_name = this->get_in("First name :\n");
    this->last_name = this->get_in("Last name :\n");
    this->nickname = this->get_in("Nickname:\n");
    this->phone_number = this->get_in("Phone number :\n");
    this->darkest_secret = this->get_in("Darkest secret :\n");
    this->index = index;
}

void    Contact::print_contact()
{
    std::cout << "--------------------------" << std::endl;
    std::cout << "    Contact Information   " << std::endl;
    std::cout << "--------------------------" << std::endl;
    std::cout << "Name: " << this->first_name << " " << this->last_name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phone_number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_secret << std::endl;
    std::cout << "Index: " << this->index << std::endl;
    std::cout << "--------------------------" << std::endl;
}
