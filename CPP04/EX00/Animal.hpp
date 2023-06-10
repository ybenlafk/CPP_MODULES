/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 12:59:40 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 13:27:06 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP

#include <iostream>

class   Animal
{
    protected:
        std::string type;
    public:
        Animal();
        Animal(std::string type);
        Animal(Animal const & src);
        virtual ~Animal();
        Animal & operator=(Animal const & src);
        virtual void makeSound();
};

#endif