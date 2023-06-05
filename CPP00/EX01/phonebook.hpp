/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:09:05 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/05/27 15:48:44 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP

#include "contact.hpp"
#include <iomanip>

class Phonebook
{
    Contact contacts[8];

    public:
        Phonebook();
        ~Phonebook();
        void    add_contact(int i);
        void    print_contact(int i);
        void    search_contact(void);
};

#endif