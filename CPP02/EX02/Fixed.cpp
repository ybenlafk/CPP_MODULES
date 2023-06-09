/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/08 14:35:24 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/09 20:56:41 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"


int get_power(int exponent, int base)
{
    int power = 1;
    for (int i = 0; i < exponent; ++i)
        power *= base;
    return (power);
}

Fixed::Fixed() : value(0){}

Fixed::~Fixed(){}

Fixed::Fixed(Fixed const & obj)
{
    if (this != &obj)
        value = obj.value;
}

Fixed& Fixed::operator=(Fixed const &obg)
{
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
    return (value);
}

void    Fixed::setRawBits(int const raw)
{
    value = raw;
}

Fixed::Fixed(int const value)
{
    this->value = value * get_power(bits_fractional, 2);
}

Fixed::Fixed(float const value)
{
    this->value = roundf(value * get_power(bits_fractional, 2));
}

float Fixed::toFloat(void) const
{
    return ((float)value / get_power(bits_fractional, 2));
}

int Fixed::toInt(void) const
{
    return (value / get_power(bits_fractional, 2));
}

bool Fixed::operator > (Fixed const &obj)
{
    return (value > obj.value);
}

bool Fixed::operator < (Fixed const &obj)
{
    return (value < obj.value);
}

bool Fixed::operator >= (Fixed const &obj)
{
    return (value >= obj.value);
}

bool Fixed::operator <= (Fixed const &obj)
{
    return (value <= obj.value);
}

bool Fixed::operator == (Fixed const &obj)
{
    return (value == obj.value);
}

bool Fixed::operator != (Fixed const &obj)
{
    return (value != obj.value);
}

Fixed Fixed::operator + (Fixed const &obj)
{
    return (Fixed(toFloat() + obj.toFloat()));
}

Fixed Fixed::operator - (Fixed const &obj)
{
    return (Fixed(toFloat() - obj.toFloat()));
}

Fixed Fixed::operator * (Fixed const &obj)
{
    return (Fixed(toFloat() * obj.toFloat()));
}

Fixed Fixed::operator / (Fixed const &obj)
{
    return (Fixed(toFloat() / obj.toFloat()));
}

Fixed& Fixed::operator ++ ()
{
    value++;
    return (*this);
}

Fixed& Fixed::operator -- ()
{
    value--;
    return (*this);
}

Fixed Fixed::operator ++ (int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed Fixed::operator -- (int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed& Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

Fixed& Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

Fixed const& Fixed::min(Fixed const &a, Fixed const &b)
{
    return ((Fixed)a < (Fixed)b ? a : b);
}

Fixed const& Fixed::max(Fixed const &a, Fixed const &b)
{
    return ((Fixed)a > (Fixed)b ? a : b);
}