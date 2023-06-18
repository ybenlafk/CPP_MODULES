/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:09:03 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/18 09:11:42 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
    brain = new Brain();
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = src;
}

Dog::~Dog()
{
    delete brain;
    std::cout << "Dog Destructor called" << std::endl;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &src)
    {
        type = src.type;
        brain = src.brain;   
    }
    return (*this);
}

std::string Dog::getType() const
{
    return (type);
}

void Dog::makeSound() const
{
    std::cout << "Dog makeSound called" << std::endl;
}