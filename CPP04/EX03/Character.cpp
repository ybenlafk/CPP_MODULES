/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:39:23 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/18 21:50:51 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character(std::string const & name) : name(name)
{
    for (int i = 0; i < 4; i++)
        Marts[i] = NULL;
}

Character::Character(Character const & src)
{
    if (this != &src)
    {
        name = src.name;
        for (int i = 0; i < 4; i++)
        {
            if (Marts[i])
                delete Marts[i];
            Marts[i] = src.Marts[i]->clone();
        }
    }
}

Character & Character::operator=(Character const & src)
{
    if (this != &src)
    {
        name = src.name;
        for (int i = 0; i < 4; i++)
        {
            if (Marts[i])
                delete Marts[i];
            Marts[i] = src.Marts[i]->clone();
        }
    }
    return (*this);
}

Character::~Character()
{
    for (int i = 0; i < 4; i++)
        if (Marts[i])
            delete Marts[i];
}

std::string const & Character::getName() const
{
    return (name);
}

void Character::equip(AMateria* m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!Marts[i])
        {
            Marts[i] = m;
            break;
        }
    }
}

void Character::unequip(int idx)
{
    idx < 4 && idx >= 0 ? Marts[idx] = NULL : 0;
}

void Character::use(int idx, ICharacter& target)
{
    if (idx < 4 && idx >= 0 && Marts[idx])
        Marts[idx]->use(target);
}