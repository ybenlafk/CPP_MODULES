/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:06:48 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/27 15:26:48 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "easyfind.hpp"

int main()
{
    {
        std::vector<int> v;
        v.push_back(1);
        v.push_back(2);
        v.push_back(3);

        try
        {
            std::cout << easyfind(v, 2) << std::endl;
            std::cout << easyfind(v, 4) << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Number not found" << std::endl;
        }
    }
    std::cout << "---------------------" << std::endl;
    {
        std::list<int> l;
        l.push_back(1);
        l.push_back(2);
        l.push_back(3);
        
        try
        {
            std::cout << easyfind(l, 2) << std::endl;
            std::cout << easyfind(l, 4) << std::endl;
        }
        catch (std::exception &e)
        {
            std::cout << "Number not found" << std::endl;
        }
    }
    return (0);
}