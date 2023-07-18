/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/17 15:46:04 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 08:14:07 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(){}

PresidentialPardonForm::~PresidentialPardonForm(){}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("presidential pardon", 25, 5), target(target){}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &obg) : AForm(obg) {*this = obg;}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obg)
{
    if (this != &obg)
    {
        AForm::operator=(obg);
        this->target = obg.target;
    }
    return (*this);
}

void PresidentialPardonForm::execute(const Bureaucrat& executor) const
{
    if (this->getSigned() == false || executor.getGrade() > this->getGrade_exec())
        throw AForm::GradeTooLowException();
    std::cout << target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}