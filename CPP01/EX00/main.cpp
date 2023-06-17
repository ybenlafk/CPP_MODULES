/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:16:35 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 17:53:22 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main()
{
    Zombie *Jotaro = newZombie("Jotaro");
    Zombie *Dio = newZombie("Dio");
    Jotaro->announce();
    Dio->announce();
    randomChump("polnareff");
    delete Jotaro;
    delete Dio;
    return (0);
}