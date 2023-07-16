/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 13:32:44 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/16 14:09:12 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

int main()
{
    Form form1("form1", 2, 90);
    Bureaucrat bur1("bur1", 1);
    
    try
    {
        form1.beSigned(bur1);
        std::cout << form1 << std::endl;
        bur1.signForm(form1);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << std::endl;
    }
    std::cout << "------------------------------" << std::endl;
    try
    {
        Form form2("form2", 20, 100);
        std::cout << form2 << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    std::cout << "------------------------------" << std::endl;
    try
    {
        Form form3("form3", 30, 500);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
}