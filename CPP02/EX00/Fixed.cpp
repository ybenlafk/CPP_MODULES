/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:56:17 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/06 21:10:30 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed()
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
}

Fixed& Fixed::operator=(Fixed const &obg)
{
    std::cout << "Copy assignment operator called" << std::endl;
    if (this == &obg)
        return (*this);
    fixed_point_nb = obg.fixed_point_nb;
    return (*this);
}

int    Fixed::getRawBits() const
{
    std::cout << "getRawBits member function called" << std::endl;
}

void    Fixed::setRawBits(int const raw)
{

}