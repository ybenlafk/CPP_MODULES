/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:52:43 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/09 23:36:53 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
    ScavTrap clp("zoro");
    ScavTrap clp2(clp);
    ScavTrap clp3;
    clp3 = clp2;
    clp.attack("aokiji");
    clp2.takeDamage(6);
    clp3.beRepaired(6);
    clp.guardGate();
    return (0);
}