/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 10:26:32 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/16 13:52:45 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HH
#define HH

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
    private:
        std::string const   name;
        bool                is_signed;
        int const           grade_sign_it;
        int const           grade_execute;
    public:
        Form();
        Form(std::string const name, int const g1, int const g2);
        Form(Form const &obg);
        Form &operator=(Form const &obg);
        ~Form();
        int         getGrade_sign() const;
        int         getGrade_exec() const;
        bool        getSigned() const;
        std::string getName() const;
        void beSigned(Bureaucrat const &bur);
        class GradeTooHighException : public std::exception
        {
            public:
                const char *what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const char *what() const throw();
        };
};

std::ostream &operator<<(std::ostream &o, Form const &obg);

#endif