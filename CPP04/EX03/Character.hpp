/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 21:37:55 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/18 21:40:34 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include <iostream>

class Character : public ICharacter
{
    private:
        std::string name;
        AMateria *Marts[4];
    public:
        Character(std::string const & name);
        Character(Character const & src);
        Character & operator=(Character const & src);
        ~Character();
        std::string const & getName() const;
        void equip(AMateria* m);
        void unequip(int idx);
        void use(int idx, ICharacter& target);
};
#endif