/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:40:44 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/18 09:40:46 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::AAnimal(std::string type) : type(type)
{
    std::cout << "AAnimal Default constructor called" << std::endl;
}

AAnimal::~AAnimal()
{
    std::cout << "AAnimal Destructor called" << std::endl;
}

AAnimal::AAnimal(AAnimal const & src)
{
    std::cout << "AAnimal Copy constructor called" << std::endl;
    *this = src;
}

AAnimal &AAnimal::operator=(AAnimal const &src)
{
    std::cout << "AAnimal Assignation operator called" << std::endl;
    if (this != &src)
        type = src.type;
    return (*this);
}

std::string AAnimal::getType() const
{
    return (type);
}

void AAnimal::makeSound() const
{
    std::cout << "AAnimal makeSound called" << std::endl;
}