/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 09:28:42 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 13:20:53 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(){}

ScalarConverter::ScalarConverter(ScalarConverter const &obg){(void)obg; *this = obg;}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &obg){(void)obg; return (*this);}

ScalarConverter::~ScalarConverter(){}

void ScalarConverter::convert(std::string str)
{
    if (isInt(str))
        IntHanndler(str);
    else if (isChar(str))
        CharHanndler(str);
    else if (isFloat(str))
        FloatHanndler(str.erase(str.length() - 1));
    else if (isDouble(str))
        DoubleHanndler(str);
    else if (!str.compare("nan") || !str.compare("nanf"))
        nan();
    else if (!str.compare("+inf") || !str.compare("+inff"))
        pinf();
    else if (!str.compare("-inf") || !str.compare("-inff"))
        minf();
    else
        std::cout << "Bad argumant." << std::endl;
}