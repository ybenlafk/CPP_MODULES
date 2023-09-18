/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:26:57 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/12 12:59:13 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"
#include "Cure.hpp"
MateriaSource::MateriaSource()
{
    for (int i = 0; i < 4; i++)
        Matrs[i] = NULL;
}

MateriaSource::MateriaSource(MateriaSource const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
            Matrs[i] = src.Matrs[i];   
    }
}

MateriaSource & MateriaSource::operator=(MateriaSource const & src)
{
    if (this != &src)
    {
        for (int i = 0; i < 4; i++)
            Matrs[i] = src.Matrs[i];
    }
    return (*this);
}

MateriaSource::~MateriaSource()
{
    for (int i = 0; i < 4; i++)
        delete Matrs[i];
}

void    MateriaSource::learnMateria(AMateria *m)
{
    for (int i = 0; i < 4; i++)
    {
        if (!Matrs[i])
        {
            Matrs[i] = m;
            break;
        }
    }
}

AMateria* MateriaSource::createMateria(std::string const & type)
{
    for (int i = 0; i < 4; i++)
        if (Matrs[i] && Matrs[i]->getType() == type)
            return (Matrs[i]->clone());
    return (NULL);
}