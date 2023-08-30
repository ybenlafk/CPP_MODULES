/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:43:40 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/30 19:04:38 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() { _lol["lol"] = "lol"; }

BitcoinExchange::BitcoinExchange(std::map<std::string ,std::string> lol) : _lol(lol) {}

BitcoinExchange::BitcoinExchange(BitcoinExchange const &obg) {*this = obg;}

BitcoinExchange::~BitcoinExchange() {}

BitcoinExchange &BitcoinExchange::operator=(BitcoinExchange const &obg) {this->_lol = obg._lol; return (*this);}

std::map<std::string ,std::string> BitcoinExchange::getLol() const {return this->_lol;}

bool checkLine(std::string line)
{
    int i = 0;
    while (line[i] && line[i] != '|')
        i++;
    if (line[i] != '|')
        return (false);
    return (true);
}
std::string ft_strtrim(std::string s1, std::string set)
{
    std::size_t start = s1.find_first_not_of(set);
    std::size_t end = s1.find_last_not_of(set);

    if (start == std::string::npos || end == std::string::npos) {return "";}

    return s1.substr(start, end - start + 1);
}

std::string getDate(std::string line)
{
    std::string date;
    int i = 0;
    while (line[i] && line[i] != '|')
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

std::string getRest(std::string line)
{
    std::string rest;
    int i;
    for (i = 0; line[i] && line[i] != '|'; i++);
    i++;
    for (; line[i]; i++)
        rest += line[i];
    return (rest);
}

void  

void   BitcoinExchange::parse(std::string line)
{
    static int i = 0;
    if (!i++)
    {
       
    }
}

void    BitcoinExchange::getDataFile(std::string file)
{
    std::ifstream fileName(file);
    if (fileName.fail())
        std::cout << "Bad File" << std::endl;
    if (fileName.is_open())
    {
        std::string line;
        while (getline(fileName, line))
        {
            parse(line);
        }
    }
}