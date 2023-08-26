/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:42:34 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/25 10:39:45 by ybenlafk         ###   ########.fr       */
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
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        std::cout << second << std::endl;
        second.decrementGrade();
        std::cout << second << std::endl;
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat third("third", 151);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    try
    {
        Bureaucrat fourth("fourth", 0);
    }
    catch(std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}