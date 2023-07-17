/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:24:06 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/17 16:33:42 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"
#include <cstdlib>
#include <ctime>

RobotomyRequestForm::RobotomyRequestForm(){}

RobotomyRequestForm::~RobotomyRequestForm(){}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("Robotomy", 72, 45), target(target){}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm const &obg) : AForm(obg) {*this = obg;}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &obg)
{
    if (this != &obg)
    {
        AForm::operator=(obg);
        this->target = obg.target;
    }
    return (*this);
}

void RobotomyRequestForm::execute(const Bureaucrat& executor) const
{
    srand(time(NULL));
    if (this->getSigned() == false || executor.getGrade() > this->getGrade_exec())
        throw AForm::GradeTooLowException();
    std::cout << "* drilling noises *" << std::endl;
    if (rand() % 2 == 0)
        std::cout << target << " has been robotomized successfully!" << std::endl;
    else
        std::cout << "Robotomization of " << target << " has failed." << std::endl;
}