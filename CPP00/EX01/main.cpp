/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/25 15:05:14 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/07 14:28:54 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"
#include "phonebook.hpp"

int main()
{
    Phonebook phonebook;
    std::string command;
    int i = 0;
    while (1)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT) : ";
        std::cin >> command;
        if (!command.length())
            break ;
        if (i == 8)
            i = 0;
        if (!strcmp(command.c_str(), "ADD"))
            phonebook.add_contact(&i);
        else if (!strcmp(command.c_str(), "SEARCH"))
            phonebook.search_contact();
        else if (!strcmp(command.c_str(), "EXIT"))
            break ;
        command = "";
    }
    return (0);
}