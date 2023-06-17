/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:07:40 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/17 10:07:50 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
    std::cout << "WrongCat Default constructor called" << std::endl;
}

WrongCat::WrongCat(WrongCat const & src)
{
    std::cout << "WrongCat Copy constructor called" << std::endl;
    *this = src;
}
WrongCat::~WrongCat()
{
    std::cout << "WrongCat Destructor called" << std::endl;
}

WrongCat &WrongCat::operator=(WrongCat const &src)
{
    std::cout << "WrongCat Assignation operator called" << std::endl;
    if (this != &src)
        type = src.type;
    return (*this);
}

std::string WrongCat::getType() const
{
    return (type);
}


void WrongCat::makeSound() const
{
    std::cout << "WrongCat makeSound called" << std::endl;
}