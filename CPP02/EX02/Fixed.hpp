/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:45:30 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/11 15:22:48 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
    private:
        int              value;
        static const int bits_fractional = 8;
    public:
        Fixed();
        Fixed(int const value);
        Fixed(float const value);
        Fixed(Fixed const &obj);
        ~Fixed();
        Fixed&  operator = (Fixed const &obj);
        bool    operator > (Fixed const &obj);
        bool    operator < (Fixed const &obj);
        bool    operator >= (Fixed const &obj);
        bool    operator <= (Fixed const &obj);
        bool    operator == (Fixed const &obj);
        bool    operator != (Fixed const &obj);
        Fixed   operator + (Fixed const &obj);
        Fixed   operator - (Fixed const &obj);
        Fixed   operator * (Fixed const &obj);
        Fixed   operator / (Fixed const &obj);
        Fixed&  operator ++ (void);
        Fixed&  operator -- (void);
        Fixed   operator ++ (int);
        Fixed   operator -- (int);
        static Fixed&  min(Fixed &a, Fixed &b);
        static Fixed&  max(Fixed &a, Fixed &b);
        static Fixed const&  min(Fixed const &a, Fixed const &b);
        static Fixed const&  max(Fixed const &a, Fixed const &b);
        int getRawBits(void) const;
        void setRawBits(int const raw);
        float toFloat(void) const;
        int toInt(void) const;
};

std::ostream& operator << (std::ostream &os, Fixed const &obj);
#endif