/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:52:43 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 12:44:13 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

int main()
{
    FragTrap frag1;
    FragTrap frag2(frag1);
    FragTrap frag3;
    frag3 = frag2;
    frag1.attack("rojer");
    frag1.takeDamage(30);
    frag1.beRepaired(20);
    frag1.highFivesGuys();
    return (0);
}