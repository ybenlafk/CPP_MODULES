/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.hpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 23:24:27 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/18 23:28:48 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include <iostream>
#include "IMateriaSource.hpp"

class   MateriaSource : public IMateriaSource
{
    private:
        AMateria* Matrs[4];
    public:
        MateriaSource();
        MateriaSource(MateriaSource const &src);
        MateriaSource & operator=(MateriaSource const &src);
        ~MateriaSource();
        void learnMateria(AMateria *m);
        AMateria* createMateria(std::string const & type);
};

#endif