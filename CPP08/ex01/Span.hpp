/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:50:19 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/29 15:49:13 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <random>
#include <vector>
#include <ctime>

#ifndef F
#define F

class Span
{
    private:
        unsigned int len;
        std::vector<int> list;
    public:
        Span();
        Span(int len);
        Span(Span const &obg);
        ~Span();
        Span &operator=(Span const &obg);
        void addNumber(int n);
        int shortestSpan();
        int longestSpan();
        void fill(std::vector<int>::iterator begin, std::vector<int>::iterator end);

};

#endif