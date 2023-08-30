/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   easyfind.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 14:37:55 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/27 15:26:53 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <vector>
#include <list>

template <typename T>
int easyfind(T &container, int n)
{
    for (typename T::iterator it = container.begin(); it != container.end(); it++)
        if (*it == n)
            return (*it);
    throw std::exception();
}