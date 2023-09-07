/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:43:40 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/03 15:49:49 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {}

BitcoinExchange::BitcoinExchange(std::map<std::string ,std::string> lol) : _lol(lol) {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &obg) {*this = obg;}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &obg) {this->_lol = obg._lol; return (*this);}

std::string ft_strtrim(std::string s1, std::string set)
{
    std::size_t start = s1.find_first_not_of(set);
    std::size_t end = s1.find_last_not_of(set);

    if (start == std::string::npos || end == std::string::npos) {return "";}

    return s1.substr(start, end - start + 1);
}

std::string getDate(std::string line, char c)
{
    std::string date;
    int i = 0;
    while (line[i] && line[i] != c)
        date += line[i++];
    return (date);
}

int countChar(std::string line, char c)
{
    int i = 0;
    int count = 0;
    while (line[i])
    {
        if (line[i] == c)
            count++;
        i++;
    }
    return (count);
} 

std::string getRest(std::string line, char c)
{
    std::string rest;
    int i;
    for (i = 0; line[i] && line[i] != c; i++);
    i++;
    for (; line[i]; i++)
        rest += line[i];
    return (rest);
}

std::map<std::string, std::string>    BitcoinExchange::getDataFile()
{
    std::ifstream fileName("data.csv");
    if (fileName.is_open())
    {
        std::string line;
        getline(fileName, line);
        while (getline(fileName, line))
            this->_lol[getDate(line, ',')] = getRest(line, ',');
    }
    else
    {
        std::cout << "Error: File not found" << std::endl;
        throw std::exception();
    }
    return (this->_lol);
}