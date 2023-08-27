/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   whatever.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:22:43 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/26 15:40:55 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
void swap(T &a, T &b)
{
    T tmp = a;
    a = b;
    b = tmp;
}

template <typename P>
P min(P &a, P &b){return (a < b ? a : b);}

template <typename W>
W max(W &a, W &b){return (a > b ? a : b);}