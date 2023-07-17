/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 13:47:52 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/17 15:47:53 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ShrubberyCreationForm.hpp"
#include <iostream>
#include <fstream>
#include <string>

ShrubberyCreationForm::ShrubberyCreationForm(){}

ShrubberyCreationForm::~ShrubberyCreationForm(){}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("Shrubbery", 145, 137), target(target){}

ShrubberyCreationForm::ShrubberyCreationForm(ShrubberyCreationForm const &obg) : AForm(obg) {*this = obg;}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(ShrubberyCreationForm const &obg)
{
    if (this != &obg)
    {
        AForm::operator=(obg);
        this->target = obg.target;
    }
    return (*this);
}

void    ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
    if (this->getSigned() == false || executor.getGrade() > this->getGrade_exec())
        throw AForm::GradeTooLowException();
    else
    {
        std::string out = this->target + "_shrubbery";
        std::ofstream file(out);
        if (file.is_open())
        {
            file << "               ,@@@@@@@,\n";
            file << "       ,,,.   ,@@@@@@/@@,  .oo8888o.\n";
            file << "    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n";
            file << "   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n";
            file << "   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n";
            file << "   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n";
            file << "   `&%\\ ` /%&'    |.|        \\ '|8'\n";
            file << "       |o|        | |         | |\n";
            file << "       |.|        | |         | |\n";
            file << "  \\\\/ .\\_\\/\\_\\/__/,\\_//__\\\\/.  \\_//__/_\n";
            file.close();
        }
        else 
        {
            std::cout << "Error: " << std::endl; return ;
        }
    }
}