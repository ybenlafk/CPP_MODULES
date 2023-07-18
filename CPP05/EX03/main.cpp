/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:50:42 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 08:36:43 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
    Intern intern;
    {
        try
        {
            AForm *ps = intern.makeForm("robotomy request", "yamato");
            Bureaucrat s("ok", 11);

            ps->beSigned(s);
            ps->execute(s);
            delete ps;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            AForm *ps = intern.makeForm("shrubbery creation", "zaraki");
            Bureaucrat s("ok", 111);

            ps->beSigned(s);
            ps->execute(s);
            delete ps;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            AForm *ps = intern.makeForm("presidential pardon", "Sarkozy");
            Bureaucrat s("ok", 2);

            ps->beSigned(s);
            ps->execute(s);
            delete ps;
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
}