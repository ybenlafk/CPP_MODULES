/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:35:24 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/11 13:16:55 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : value(0)
{
    std::cout << "Default constructor called" << std::endl;
}

Fixed::~Fixed()
{
    std::cout << "Destructor called" << std::endl;
}

Fixed::Fixed(Fixed const & obj)
{
    std::cout << "Copy constructor called" << std::endl;
    if (this != &obj)
        value = obj.getRawBits();
}

Fixed& Fixed::operator=(Fixed const &obg)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obg)
        value = obg.getRawBits();
    return (*this);
}

int    Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
    return (value);
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
}