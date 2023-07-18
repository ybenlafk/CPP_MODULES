/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AForm.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/16 14:59:58 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 08:32:55 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HH
#define HH

#include <iostream>
#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
    private:
        std::string const   name;
        bool                is_signed;
        int const           grade_sign_it;
        int const           grade_execute;
    public:
        AForm();
        AForm(std::string const name, int const g1, int const g2);
        AForm(AForm const &obg);
        AForm &operator=(AForm const &obg);
        virtual ~AForm();
        int             getGrade_sign() const;
        int             getGrade_exec() const;
        bool            getSigned() const;
        std::string     getName() const;
        void            beSigned(Bureaucrat const &bur);
        virtual void    execute(Bureaucrat const & executor) const = 0;
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

std::ostream &operator<<(std::ostream &o, AForm const &obg);

#endif