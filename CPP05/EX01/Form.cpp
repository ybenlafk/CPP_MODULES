/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 11:12:49 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/16 15:05:41 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() :name("yuy") ,is_signed(false) ,grade_sign_it(50) ,grade_execute(50){}

Form::Form(std::string const name, int const g1, int const g2) :name(name) ,is_signed(false) ,grade_sign_it(g1) ,grade_execute(g2)
{
    if (g1 < 1 || g2 < 1)
        throw Form::GradeTooHighException();
    else if (g1 > 150 || g2 > 150)
        throw Form::GradeTooLowException();
}

Form::Form(Form const &obg) :name(obg.name) ,is_signed(false) ,grade_sign_it(obg.grade_sign_it) ,grade_execute(obg.grade_execute){}

Form &Form::operator=(Form const &obg)
{
    if (this != &obg)
        this->is_signed = obg.getSigned();
    return (*this);
}

Form::~Form(){}

int  Form::getGrade_sign() const{return (grade_sign_it);}

int  Form::getGrade_exec() const{return (grade_execute);}

bool        Form::getSigned() const{return (is_signed);}

std::string Form::getName() const{return (name);}

std::ostream &operator<<(std::ostream &o, Form const &obg)
{
    o << obg.getName() << " | " << (obg.getSigned() ? "(true)" : "(false)")  << " | " << obg.getGrade_sign() << " | " << obg.getGrade_exec();
    return (o);
}

const char* Form::GradeTooHighException::what() const throw(){return ("Grade is too high");}

const char* Form::GradeTooLowException::what() const throw(){return ("Grade is too low");}

void Form::beSigned(Bureaucrat const &bur)
{
    if (bur.getGrade() <= grade_sign_it)
        this->is_signed = true;
    else
        throw Form::GradeTooLowException();
}
