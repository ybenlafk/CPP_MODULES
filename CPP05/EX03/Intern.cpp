/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 08:01:05 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 08:26:11 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern(){}

Intern::Intern(Intern const &obg){*this = obg;}

Intern &Intern::operator=(Intern const &obg){(void)obg;return (*this);}

Intern::~Intern(){}

AForm   *Intern::makeForm(std::string FormName, std::string target)
{
    int is = -1;
    std::string names[3] = {"robotomy request", "shrubbery creation", "presidential pardon"};

    for (int i = 0; i < 3; i++)
    {
        if (!names[i].compare(FormName))
        {
            is = i;
            break ;
        }
    }
    switch (is)
    {
        case 0:
            return(std::cout << "Intern creates " << FormName << std::endl, new RobotomyRequestForm(target));
        case 1:
            return(std::cout << "Intern creates " << FormName << std::endl, new ShrubberyCreationForm(target));
        case 2:
            return(std::cout << "Intern creates " << FormName << std::endl, new PresidentialPardonForm(target));
        default:
        {
            std::cout << "❌ Error: this form doesn't exist." << std::endl;
            break;
        }
    }
    return (NULL);
}