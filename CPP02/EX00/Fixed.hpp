/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 19:45:30 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/06 20:01:27 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

#include <iostream>

class Fixed
{
    private:
        int fixed_point_nb;
        static const int bits_fractional = 8;
    public:
        Fixed();
        Fixed(Fixed const &obj);
        ~Fixed();
        Fixed& operator=(Fixed const &obj);
        int getRawBits(void) const;
        void setRawBits(int const raw);
};