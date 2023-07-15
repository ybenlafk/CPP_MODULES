/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/15 08:24:16 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/15 09:11:42 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(){}

Bureaucrat::~Bureaucrat(){}

Bureaucrat::Bureaucrat(std::string const name, int grade) : name(name)
{
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else
        this->grade = grade;
}

Bureaucrat::Bureaucrat(Bureaucrat const & src): name(src.name) {*this = src;}

Bureaucrat & Bureaucrat::operator=(Bureaucrat const &src)
{
    if (this != &src)
        grade = src.grade;
    return (*this);
}

std::string const Bureaucrat::getName() const {return (name);}

int Bureaucrat::getGrade() const {return (grade);}

void    Bureaucrat::incrementGrade()
{
    grade--;
    if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

void    Bureaucrat::decrementGrade()
{
    grade++;
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw(){return ("Grade is too high");}

const char* Bureaucrat::GradeTooLowException::what() const throw(){return ("Grade is too low");}

std::ostream &operator<<(std::ostream &o, Bureaucrat const &src)
{
    o << src.getName() << ", bureaucrat grade " << src.getGrade();
    return (o);
}