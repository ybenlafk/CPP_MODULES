/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RPN.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/17 23:39:06 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/22 14:51:21 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include "RPN.hpp"

#include <stack>
#include <string>
#include <sstream>

std::stack<std::string> fillStack(std::string str)
{
    std::stack<std::string> stack;
    std::stringstream ss(str);
    std::string tmp;
    while (ss >> tmp)
        stack.push(tmp);

    std::stack<std::string> reversedStack;
    while (!stack.empty())
    {
        reversedStack.push(stack.top());
        stack.pop();
    }

    return reversedStack;
}

int     RPN(std::stack<std::string> tab)
{
    int size = tab.size();
    std::stack<int> stack;
    for (int i = 0; i < size; i++)
    {
        if (tab.top() == "+" || tab.top() == "-" || tab.top() == "*" || tab.top() == "/")
        {
            if (stack.size() < 2)
                return (std::cout << "Error" << std::endl, 0);
            int a = stack.top();
            stack.pop();
            int b = stack.top();
            stack.pop();
            if (tab.top() == "+")
                stack.push(b + a);
            else if (tab.top() == "-")
                stack.push(b - a);
            else if (tab.top() == "*")
                stack.push(b * a);
            else if (tab.top() == "/")
            {
                if (a == 0)
                    return (std::cout << "Error" << std::endl, 0);
                stack.push(b / a);
            }
        }
        else
        {
            if (tab.top().size() != 1 || !isdigit(tab.top()[0]))
                return (std::cout << "Error" << std::endl, 0);
            std::stringstream ss(tab.top());
            int tmp;
            ss >> tmp;
            stack.push(tmp);
        }
        tab.pop();
    }
    if (stack.size() != 1)
        return (std::cout << "Error" << std::endl, 0);
    std::cout << stack.top() << std::endl;
    return 1;
}
