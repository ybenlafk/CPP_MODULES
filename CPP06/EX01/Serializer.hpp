/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:13:17 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 14:49:21 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PP
#define PP

#include <iostream>

typedef struct data
{
    char    *str;
    int     i;
}   Data;

class   Serializer
{
    public:
        Serializer();
        Serializer(Serializer const &obg);
        ~Serializer();
        Serializer &operator=(Serializer const &obg);
        uintptr_t serialize(Data* ptr);
        Data* deserialize(uintptr_t raw);
};
#endif