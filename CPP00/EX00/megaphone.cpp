/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 19:45:51 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/07 13:33:17 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main(int ac, char **av)
{
    if (ac > 1)
    {
        for (int j = 1; av[j]; j++)
        {
            for (int i = 0; av[j][i]; i++)
                std::cout << (char) toupper(av[j][i]);
            if (j < ac - 1)
                    std::cout << " ";
        }
    }else
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    std::cout << std::endl;
    return (0);
}