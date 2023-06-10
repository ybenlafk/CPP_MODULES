/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:07:40 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 13:08:34 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = src;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this != &src)
        type = src.type;
    return (*this);
}

Cat::~Cat()
{
    std::cout << "Cat Destructor called" << std::endl;
}

void Cat::makeSound()
{
    std::cout << "Cat makeSound called" << std::endl;
}