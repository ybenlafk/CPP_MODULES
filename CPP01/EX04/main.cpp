/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 12:17:04 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 18:28:28 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>


void ft_replace(std::string& str, std::string oldstr, std::string newstr) {
    size_t pos = str.find(oldstr);

    while (pos != std::string::npos)
    {
        str.erase(pos, oldstr.length()); 
        str.insert(pos, newstr);

        pos = str.find(oldstr, pos);
    }
}

int main(int ac , char **av)
{
    if (ac == 4)
    {
        std::ifstream file(av[1]);
        if (file.fail())
            return (std::cout << "Error: " <<  std::endl, 1);
        std::string dot = ".replace";
        std::string outfile = av[1] + dot;
        std::ofstream out(outfile);
        if (out.fail())
            return (std::cout << "Error: " <<  std::endl, 1);
        if (file.is_open())
        {
            std::string str;
            while (std::getline(file, str))
            {
                ft_replace(str, av[2], av[3]);
                out << str;
                if (!file.eof())
                    out << std::endl;
            }
        }
        file.close();
        out.close();
    }
    else
        std::cout << "Bad arguments" << std::endl;
    return (0);
}