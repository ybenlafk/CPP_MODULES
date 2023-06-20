/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:07:40 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/20 12:14:07 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : AAnimal("Cat")
{
    std::cout << "Cat Default constructor called" << std::endl;
    brain = new Brain();
}

Cat::Cat(Cat const & src)
{
    std::cout << "Cat Copy constructor called" << std::endl;
    *this = src;
}
Cat::~Cat()
{
    delete brain;
    std::cout << "Cat Destructor called" << std::endl;
}

Cat &Cat::operator=(Cat const &src)
{
    std::cout << "Cat Assignation operator called" << std::endl;
    if (this != &src)
    {
        type = src.type;
        delete brain;
        brain = new Brain(*(src.brain));
    }
    return (*this);
}

std::string Cat::getType() const
{
    return (type);
}


void Cat::makeSound() const
{
    std::cout << "Cat makeSound called" << std::endl;
}