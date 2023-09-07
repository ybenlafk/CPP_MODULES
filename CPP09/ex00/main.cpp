/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:43:37 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/04 12:24:48 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"
#include <sstream>

float strToFloat(std::string str)
{
    std::stringstream ss(str);
    float f;
    ss >> f;
    return (f);   
}

long strToLong(std::string str)
{
    std::stringstream ss(str);
    long l;
    ss >> l;
    return (l);   
}

void SearchDate(std::string data, std::string value, std::map<std::string, std::string> list)
{
    std::map<std::string, std::string>::iterator _it = list.find(data);
    if (_it != list.end())
    {
        std::cout << data << " => " << value << " = " << (strToFloat(value) * strToFloat(_it->second)) << std::endl;
        return ;
    }
    std::map<std::string, std::string>::iterator it = list.lower_bound(data);
    
    if (it != list.end())
        it--;
     std::cout << data << " =>" << value << " = " << (strToFloat(value) * strToFloat(it->second)) << std::endl;
}

bool isValidDate(std::string date)
{
    int i = 0;
    while (date[i] && date[i] != '-')
        if (!isdigit(date[i++])) return (false);
    if (i != 4 || date[i] != '-') return (false);
    i++;
    while (date[i] && date[i] != '-')
        if (!isdigit(date[i++])) return (false);
    if (i != 7 || date[i] != '-') return (false);
    i++;
    while (date[i] && date[i] != ' ')
        if (!isdigit(date[i++])) return (false);
    if (i != 10 || date[i] != ' ') return (false);
    i++;
    if (date[i] != '\0') return (false);
    return (true);
}

int isValidValue(std::string value)
{
    int i = 0;
    if (value[i] == ' ') i++;
    else return (2);
    if (value[i] == '-') return (1);
    if (value[i] == '.') return (2);
    if (countChar(value, '.') > 1) return (2);
    while (value[i])
    {
        if (!isdigit(value[i]) && value[i] != '.')
            return (2);
        i++;
    }
    if (value[i - 1] == '.') return (2);
    if (strToLong(value) > 1000) return (3);
    return (0);
}

void parsing(std::string line, std::map<std::string, std::string> list)
{
    static int i = 0;
    if (!i++)
    {
        if (countChar(line, '|') == 1)
        {
            std::string date = getDate(line, '|');
            std::string value = getRest(line, '|');
            if (date.compare("date ") || value.compare(" value"))
            {
                std::cout << "Error: Wrong format" << std::endl;
                return ;
            }   
        }
        else
        {
            std::cout << "Error: Wrong format" << std::endl;
            return ;
        }
    }
    else
    {
        if (countChar(line, '|') == 1)
        {
            std::string data = getDate(line, '|');
            std::string value = getRest(line, '|');
            if (isValidDate(data) == false)
            {
                std::cout << "Error: not a valid date." << std::endl;
                return ;
            }
            else if (isValidValue(value) == 1)
                std::cout << "Error: not a positive number." << std::endl;
            else if (isValidValue(value) == 2)
                std::cout << "Error: bad value." << std::endl;
            else if (isValidValue(value) == 3)
                std::cout << "Error: too large a number." << std::endl;
            else if (!isValidValue(value) && isValidDate(data))
                SearchDate(data, value, list);
            else
                std::cout << "Error: bad input => " << line << std::endl;
        }
        else
            std::cout << "Error: bad input => " << line << std::endl; 
    }
}

int main(int ac, char **av)
{
    try
    {
        if (ac == 2)
        {
            BitcoinExchange lol;
            std::map<std::string, std::string> list = lol.getDataFile();
            
            std::ifstream file(av[1]);
            if (file.is_open())
            {
                std::string line;
                while (getline(file, line))
                    parsing(line, list);
            }
            else
                std::cout << "Error: File not found" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return (0);
}