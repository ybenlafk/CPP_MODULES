/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 11:11:52 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 13:53:31 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <sstream>
#include "ScalarConverter.hpp"

bool hasDecimal_f(float value){return value != static_cast<int>(value);}

bool hasDecimal_d(double value){return value != static_cast<int>(value);}

long long strToLong(std::string str)
{
    long long result;
    
    std::stringstream ss(str);
    ss >> result;
    return result;
}

float strToFloat(std::string str)
{
    std::stringstream ss(str);
    float result;
    ss >> result;
    return result;
}

double strToDouble(std::string str)
{
    std::stringstream ss(str);
    double result;
    ss >> result;
    return result;
}

bool isInt(std::string str)
{
    int i = 0;
    if (str.empty())
        return (false);
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i])
        if (!std::isdigit(str[i++]))
            return (false);
    return (true);
}

bool isChar(std::string str)
{
    if (str.empty())
        return (false);
    if (str.length() != 3)
        return (false);
    if (str[0] != '\'' || str[2] != '\'')
        return (false);
    if (!isalpha(str[1]))
        return (false);
    return (true);
}

bool isFloat(std::string str)
{
    int i = 0;
    if (str.empty())
        return (false);
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && str[i] != '.')
        if (!std::isdigit(str[i++]))
            return (false);
    if (str[i] == '.') i++;
    while (str[i] && str[i] != 'f')
        if (!std::isdigit(str[i++]))
            return (false);
    if (str[i] == 'f' && str[i - 1] == '.') return (false);
    if (str[i] == 'f') i++;
    else return (false);
    if (str[i]) return (false);
    return (true);
}

bool isDouble(std::string str)
{
    int i = 0;
    if (str.empty())
        return (false);
    if (str[i] == '+' || str[i] == '-')
        i++;
    while (str[i] && str[i] != '.')
        if (!std::isdigit(str[i++]))
            return (false);
    if (str[i] == '.' && str[i + 1]) i++;
    else return (false);
    while (str[i])
        if (!std::isdigit(str[i++]))
            return (false);
    return (true);
}

void    IntHanndler(std::string str)
{
    long long nb = strToLong(str);
    if (nb > CHAR_MAX || nb < CHAR_MIN)
        std::cout << "char: impossible" << std::endl;
    else if (nb < 32 || nb > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    
    if (nb > INT_MAX || nb < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    if (hasDecimal_f(static_cast<float>(nb)))
        std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
    if (hasDecimal_d(static_cast<double>(nb)))
        std::cout << "double: " << static_cast<double>(nb) << std::endl;
    else
        std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
}

void    CharHanndler(std::string str)
{
    char c = str[1];
    std::cout << "char: " << c << std::endl;
    std::cout << "int: " << static_cast<int>(c) << std::endl;
    std::cout << "float: " << static_cast<float>(c) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(c) << ".0" << std::endl;
}

void    FloatHanndler(std::string str)
{
    float nb = strToFloat(str);
    
    if (nb > CHAR_MAX || nb < CHAR_MIN)
        std::cout << "char: impossible" << std::endl;
    else if (nb < 32 || nb > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    
    if (nb > INT_MAX || nb < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    
    std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    if (hasDecimal_d(static_cast<double>(nb)))
        std::cout << "double: " << static_cast<double>(nb) << std::endl;
    else
        std::cout << "double: " << static_cast<double>(nb) << ".0" << std::endl;
}

void    DoubleHanndler(std::string str)
{
    double nb = strToDouble(str);
    
    if (nb > CHAR_MAX || nb < CHAR_MIN)
        std::cout << "char: impossible" << std::endl;
    else if (nb < 32 || nb > 126)
        std::cout << "char: Non displayable" << std::endl;
    else
        std::cout << "char: " << static_cast<char>(nb) << std::endl;
    
    if (nb > INT_MAX || nb < INT_MIN)
        std::cout << "int: impossible" << std::endl;
    else
        std::cout << "int: " << static_cast<int>(nb) << std::endl;
    
    if (hasDecimal_d(nb))
        std::cout << "float: " << static_cast<float>(nb) << "f" << std::endl;
    else
        std::cout << "float: " << static_cast<float>(nb) << ".0f" << std::endl;
    std::cout << "double: " << static_cast<double>(nb) << std::endl;   
}

void    nan()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: nanf" << std::endl;
    std::cout << "double: nan" << std::endl;   
}

void    pinf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: +inff" << std::endl;
    std::cout << "double: +inf" << std::endl;   
}

void    minf()
{
    std::cout << "char: impossible" << std::endl;
    std::cout << "int: impossible" << std::endl;
    std::cout << "float: -inff" << std::endl;
    std::cout << "double: -inf" << std::endl;
}