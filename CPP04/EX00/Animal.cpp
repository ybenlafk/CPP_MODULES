/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:22:05 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 13:27:13 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal(std::string type) : type(type)
{
    std::cout << "Animal Default constructor called" << std::endl;
}

Animal::~Animal()
{
    std::cout << "Animal Destructor called" << std::endl;
}

Animal::Animal(Animal const & src)
{
    std::cout << "Animal Copy constructor called" << std::endl;
    *this = src;
}

Animal &Animal::operator=(Animal const &src)
{
    std::cout << "Animal Assignation operator called" << std::endl;
    if (this != &src)
        type = src.type;
    return (*this);
}

void Animal::makeSound()
{
    std::cout << "Animal makeSound called" << std::endl;
}

