/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/25 10:59:58 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/07 14:28:39 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

bool is_int(const std::string& str)
{
    if (str.empty())
        return (false);
    for (int i = 0; i < (int)str.length(); i++)
        if (!std::isdigit(str[i]))
            return (false);
    return (true);
}

Phonebook::Phonebook()
{
    std::cout << "Phonebook created" << std::endl;
}
Phonebook::~Phonebook()
{
    std::cout << "Phonebook destroyed" << std::endl;
}

void    Phonebook::add_contact(int *i)
{
    contacts[*i].fill_contact(*i + 1);
    if (contacts[*i].get_first_name() != "")
        (*i)++;
}

void   Phonebook::print_contact(int i)
{
    this->contacts[i].print_contact();
}

void    Phonebook::search_contact(void)
{
    int i = 0;
    std::string index;
    std::cout << "     index|first name| last name|  nickname" << std::endl;
    while (i < 8)
    {
        if (this->contacts[i].get_first_name() != "")
        {
            std::cout << std::setw(10) << this->contacts[i].get_index() << "|";
            std::cout << std::setw(10) << this->contacts[i].get_first_name() << "|";
            std::cout << std::setw(10) << this->contacts[i].get_last_name() << "|";
            std::cout << std::setw(10) << this->contacts[i].get_nickname() << std::endl;
        }
        i++;
    }
    std::cout << "The index : ";
    std::cin >> index;
    if (is_int(index) == false){
        std::cout << "Bad argument" << std::endl;
        return ;
    }
    if (!index.length())
        return ;
    int j = atoi(index.c_str());
    if (j > 0 && j < 9 && this->contacts[j - 1].get_first_name() != "")
        this->print_contact(j - 1);
    else
        std::cout << "This contact doesn't exist" << std::endl;
}

