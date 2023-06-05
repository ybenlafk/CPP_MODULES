/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/04 20:12:36 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/05 11:02:49 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
class   Zombie
{
    private:
        std::string name;
    public:
        Zombie(std::string name);
        Zombie(void);
        ~Zombie(void);
        void    announce(void);
        void    setName(std::string name){this->name = name;}
};

Zombie*     zombieHorde( int N, std::string name );
#endif