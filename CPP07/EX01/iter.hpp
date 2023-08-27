/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:44:33 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/27 12:36:21 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T, typename F>
void iter(T *array, int size, F job)
{
    for (int i = 0; i < size; i++)
        job(array[i]);
}

template< typename T >
void print( T& x )
{
  std::cout << x << std::endl;
  return;
}

