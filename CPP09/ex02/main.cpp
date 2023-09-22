/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:44:04 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/22 15:06:55 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"
using namespace std;
int main(int ac, char **av)
{
    try
    {
        if (ac >= 2)
        {
            PmergeMe pm;
            
            pm.fill(av + 1);
            pm.sort();
            pm.maxSwap();
            pm.sorChunks();
            // // for (std::vector<int> ::iterator it = pm.Jacob.begin(); it != pm.Jacob.end(); it++)
            // //     std::cout << *it << " ";
            // for (std::vector<int> ::iterator it = pm.combined.begin(); it != pm.combined.end(); it++)
            //     std::cout << *it << " ";
            // for (std::list<node*>::iterator it = pm.chunks.begin(); it != pm.chunks.end(); it++)
            //     std::cout << "[" << (*it)->val1 << " " << (*it)->val2 << "]\n";
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

}