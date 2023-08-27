/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:35:24 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/26 11:42:19 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// Precision is about how consistent your measurements are, 
// while accuracy is about how close your measurements are to the correct answer.

int get_power(int fr, int base)
{
    int power = 1;
    for (int i = 0; i < fr; ++i)
        power *= base;
    return (power);
}

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
        *this = obj;
}

Fixed& Fixed::operator=(Fixed const &obg)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this != &obg)
        value = obg.value;
    return (*this);
}

std::ostream& operator << (std::ostream &os, Fixed const &obj)
{
    os << obj.toFloat();
    return (os);
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

Fixed::Fixed(int const value)
{
    std::cout << "Int constructor called" << std::endl;
    this->value = value * get_power(bits_fractional, 2);
}

Fixed::Fixed(float const value)
{
    std::cout << "Float constructor called" << std::endl;
    this->value = (int)roundf(value * get_power(bits_fractional, 2));
}

float Fixed::toFloat(void) const
{
    return ((float)value / get_power(bits_fractional, 2));
}

int Fixed::toInt(void) const
{
    return (value / get_power(bits_fractional, 2));
}