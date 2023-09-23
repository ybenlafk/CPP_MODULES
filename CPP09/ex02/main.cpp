/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:44:04 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/23 13:14:52 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    try
    {
        if (ac >= 2)
        {
            
            PmergeMe pm;
            
            std::clock_t start = std::clock();
            pm.fill(av + 1);
            if (pm.list.size() > 1)
                pm.sort();

            std::clock_t end = std::clock();
            double duration = (end - start) / (double)CLOCKS_PER_SEC * 1e6;
            
            start = std::clock();
            pm._fill(av + 1);
            if (pm._list.size() > 1)
                pm._sort();

            end = std::clock();
            double _duration = (end - start) / (double)CLOCKS_PER_SEC * 1e6;
            
            std::cout << "\033[0;31mBefore: \033[0m";
            for (std::vector<int>::iterator it = pm.list.begin(); it != pm.list.end(); it++)
            {
                std::cout << *it;
                if (it + 1 != pm.list.end())
                    std::cout << " ";
            }
            std::cout << std::endl;
            std::cout << "\033[0;31mAfter:  \033[0m";
            for (std::vector<int>::iterator it = pm.first.begin(); it != pm.first.end(); it++)
            {
                std::cout << *it;
                if (it + 1 != pm.first.end())
                    std::cout << " ";
            }
            std::cout << std::endl;
            std::cout << "Time to process a range of  "<< pm.list.size() <<" elements with std::vector : " << duration << " us" << std::endl;
            std::cout << "Time to process a range of  "<< pm._list.size() <<" elements with std::deque  : " << _duration << " us" << std::endl;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}