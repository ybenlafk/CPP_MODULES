/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:07:10 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/26 10:07:10 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

int main()
{
    Serializer ser;
    Data *data1 = new Data;

    data1->i = 42;
    uintptr_t p = ser.serialize(data1);
    Data *data2 = ser.deserialize(p);

    std::cout << data1->i << std::endl;
    std::cout << data2->i << std::endl;
    
    delete data1;
    return (0);
}