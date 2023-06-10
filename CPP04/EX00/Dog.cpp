/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:09:03 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 13:24:47 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
    std::cout << "Dog Default constructor called" << std::endl;
}

Dog::Dog(Dog const & src)
{
    std::cout << "Dog Copy constructor called" << std::endl;
    *this = src;
}

Dog &Dog::operator=(Dog const &src)
{
    std::cout << "Dog Assignation operator called" << std::endl;
    if (this != &src)
        type = src.type;
    return (*this);
}

Dog::~Dog()
{
    std::cout << "Dog Destructor called" << std::endl;
}

void Dog::makeSound()
{
    std::cout << "Dog makeSound called" << std::endl;
}