/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 22:19:19 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/15 09:11:47 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_H
# define BUREAUCRAT_H

#include <iostream>
#include <stdexcept>

class Bureaucrat
{
    private:
        std::string const   name;
        int                 grade;
    public:
        Bureaucrat();
        ~Bureaucrat();
        Bureaucrat(std::string const name, int grade);
        Bureaucrat(Bureaucrat const & src);
        Bureaucrat & operator=(Bureaucrat const & src);
        std::string const getName() const;
        int getGrade() const;
        void    incrementGrade();
        void    decrementGrade();
        class GradeTooHighException : public std::exception
        {
            public:
                const  char* what() const throw();
        };
        class GradeTooLowException : public std::exception
        {
            public:
                const  char* what() const throw();
        };
};

std::ostream & operator<<(std::ostream & o, Bureaucrat const & src);

#endif