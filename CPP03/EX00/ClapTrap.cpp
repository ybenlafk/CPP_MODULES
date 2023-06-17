/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:29:10 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/16 15:40:29 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):name(name), hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Parameterized Constructor called" << std::endl;
}

ClapTrap::ClapTrap(): hit_points(10), energy_points(10), attack_damage(0)
{
    std::cout << "ClapTrap Constructor called" << std::endl;
}

ClapTrap::ClapTrap(ClapTrap const &clp)
{
    std::cout << "ClapTrap Copy Constructor called" << std::endl;
    *this = clp;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap Destructor called" << std::endl;
}

ClapTrap& ClapTrap::operator = (ClapTrap const &clp)
{
    if (this != &clp)
    {
        name = clp.name;
        hit_points = clp.hit_points;
        energy_points = clp.energy_points;
        attack_damage = clp.attack_damage;
    }
    std::cout << "ClapTrap assignment operator called" << std::endl;
    return (*this);
}

void ClapTrap::attack(const std::string& target)
{
    if (hit_points <= 0 || energy_points <= 0)
        return ;
    std::cout << "ClapTrap " << name << " attack " << target << ", causing " << attack_damage << " points of damage!" << std::endl;
    energy_points--;
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (hit_points <= 0 || energy_points <= 0)
        return ;
    std::cout << "ClapTrap " << name << " take " << amount << " points of damage!" << std::endl;
    hit_points -= amount;
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (hit_points <= 0 || energy_points <= 0)
        return ;
    std::cout << "ClapTrap " << name << " be repaired " << amount << " points of damage!" << std::endl;
    energy_points--;
    hit_points += amount;
}