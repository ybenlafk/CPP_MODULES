/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 09:44:24 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/19 19:24:25 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(): type("") {}

AMateria::AMateria(std::string const & type): type(type) {}

AMateria::~AMateria() {}

AMateria::AMateria(AMateria const & src)
{
    if (this != &src)
        *this = src;
}

AMateria & AMateria::operator=(AMateria const & src)
{
    if (this != &src)
        this->type = src.type;
    return *this;
}

std::string const & AMateria::getType() const
{
    return this->type;
}

void AMateria::use(ICharacter& target)
{
    std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}