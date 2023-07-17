/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:12:49 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/17 13:29:54 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AForm.hpp"

AForm::AForm() :name("yuy") ,is_signed(false) ,grade_sign_it(50) ,grade_execute(50){}

AForm::AForm(std::string const name, int const g1, int const g2) :name(name) ,is_signed(false) ,grade_sign_it(g1) ,grade_execute(g2)
{
    if (g1 < 1 || g2 < 1)
        throw AForm::GradeTooHighException();
    else if (g1 > 150 || g2 > 150)
        throw AForm::GradeTooLowException();
}

AForm::AForm(AForm const &obg) :name(obg.name) ,is_signed(false) ,grade_sign_it(obg.grade_sign_it) ,grade_execute(obg.grade_execute){}

AForm &AForm::operator=(AForm const &obg)
{
    if (this != &obg)
        this->is_signed = obg.getSigned();
    return (*this);
}

AForm::~AForm(){}

int  AForm::getGrade_sign() const{return (grade_sign_it);}

int  AForm::getGrade_exec() const{return (grade_execute);}

bool        AForm::getSigned() const{return (is_signed);}

std::string AForm::getName() const{return (name);}

std::ostream &operator<<(std::ostream &o, AForm const &obg)
{
    o << obg.getName() << " | " << (obg.getSigned() ? "(true)" : "(false)")  << " | " << obg.getGrade_sign() << " | " << obg.getGrade_exec();
    return (o);
}

const char* AForm::GradeTooHighException::what() const throw(){return ("Grade is too high");}

const char* AForm::GradeTooLowException::what() const throw(){return ("Grade is too low");}

void AForm::beSigned(Bureaucrat const &bur)
{
    if (bur.getGrade() <= grade_sign_it)
        this->is_signed = true;
    else
        throw AForm::GradeTooLowException();
}