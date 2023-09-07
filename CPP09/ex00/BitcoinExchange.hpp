/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:43:01 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/03 15:47:17 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PP
#define PP

#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange
{
    private:
        std::map<std::string ,std::string> _lol;
    public:
        BitcoinExchange();
        BitcoinExchange(std::map<std::string ,std::string> lol);
        BitcoinExchange(BitcoinExchange const &obg);
        ~BitcoinExchange();
        BitcoinExchange &operator=(BitcoinExchange const &obg);
        std::map<std::string, std::string>    getDataFile();
};

std::string getDate(std::string line, char c);
int countChar(std::string line, char c);
std::string getRest(std::string line, char c);

#endif