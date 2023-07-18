/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:24:16 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 13:19:45 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GG
#define GG

#include <iostream>
#include <cfloat>
#include <cmath>

class ScalarConverter
{
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter const &obg);
        ~ScalarConverter();
        ScalarConverter &operator=(ScalarConverter const &obg);
        static void convert(std::string str);
};

bool isInt(std::string str);
bool isChar(std::string str);
bool isFloat(std::string str);
bool isDouble(std::string str);

void    CharHanndler(std::string str);
void    IntHanndler(std::string str);
void    FloatHanndler(std::string str);
void    DoubleHanndler(std::string str);

void    nan();
void    pinf();
void    minf();

#endif