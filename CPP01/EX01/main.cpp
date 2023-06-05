/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:39:45 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/04 20:47:42 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *rijal = zombieHorde(10, "ljaych");
    for (int i = 0; i < 10; i++)
        rijal[i].announce();
    delete[] rijal;
    return (0);
}