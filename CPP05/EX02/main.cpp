/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 14:50:42 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/17 16:22:07 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
    {
        try
        {
            ShrubberyCreationForm ps("pskch");
            Bureaucrat s("ok", 114);

            ps.beSigned(s);
            ps.execute(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            RobotomyRequestForm ps("zaraki");
            Bureaucrat s("ok", 20);

            ps.beSigned(s);
            ps.execute(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    {
        try
        {
            PresidentialPardonForm ps("Sarkozy");
            Bureaucrat s("ok", 2);

            ps.beSigned(s);
            ps.execute(s);
        }
        catch(const std::exception& e)
        {
            std::cerr << e.what() << '\n';
        }
    }
    
}