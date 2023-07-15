/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:42:34 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/15 09:13:50 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main()
{
    Bureaucrat first("first", 1);
    Bureaucrat second("second", 150);

    try
    {
        std::cout << first << std::endl;
        first.incrementGrade();
        std::cout << first << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << second << std::endl;
        second.decrementGrade();
        std::cout << second << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat third("third", 151);
        std::cout << third << std::endl;
        third.decrementGrade();
        std::cout << third << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat fourth("fourth", 0);
        std::cout << fourth << std::endl;
        fourth.incrementGrade();
        std::cout << fourth << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}