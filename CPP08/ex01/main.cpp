/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:27:22 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/29 15:56:14 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

int main()
{
    Span sp = Span(10000);
    std::vector<int> nums;
    try
    {
        nums.reserve(10000);
        std::srand(std::time(NULL));
        for (int i = 0; i < 10000; i++)
            nums.push_back(std::rand());

        sp.fill(nums.begin(), nums.end());
        
        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
}