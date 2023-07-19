/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Serializer.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/18 14:47:08 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/07/18 14:49:46 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Serializer.hpp"

Serializer::Serializer(){}

Serializer::Serializer(Serializer const &obg){(void)obg; *this = obg;}

Serializer &Serializer::operator=(Serializer const &obg){(void)obg; return (*this);}

Serializer::~Serializer(){}

uintptr_t Serializer::serialize(Data* ptr)
{
    
}

Data* Serializer::deserialize(uintptr_t raw)
{
    
}
