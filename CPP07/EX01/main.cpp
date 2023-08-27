/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:26:13 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/27 12:36:50 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

int main( void )
{
    int test1[5] = {1, 2, 3, 4, 5};
    float test2[5] = {1.01f, 2.01f, 3.01f, 4.01f, 5.01f};
    std::string test3[4] = {"luffy", "zoro", "sanji", "roger"};

    iter(test1, 5, print<int>);
    iter(test2, 5, print<float>);
    iter(test3, 4, print<std::string>);
    
    return (0);
}