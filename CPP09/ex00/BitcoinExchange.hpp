/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/30 11:43:01 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/30 13:41:48 by ybenlafk         ###   ########.fr       */
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
        std::map<std::string ,std::string> getLol() const;
        void    getDataFile(std::string file);
        void    parse(std::string line);
};

#endif