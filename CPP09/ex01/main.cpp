/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:38:33 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/18 11:53:12 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::stack<std::string> stack = fillStack(av[1]);
        RPN(stack);
        // int size = stack.size();
        // for (int i = 0; i < size; i++)
        // {
        //     std::cout << stack.top() << std::endl;
        //     stack.pop();
        // }
    }else
        std::cout << "Error" << std::endl;
}