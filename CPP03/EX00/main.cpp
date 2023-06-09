/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:52:43 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/09 21:45:59 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
    ClapTrap clp("luffy");
    ClapTrap clp2(clp);
    ClapTrap clp3;
    clp3 = clp2;
    clp.attack("kaido");
    clp2.takeDamage(6);
    clp3.beRepaired(6);
    return (0);
}