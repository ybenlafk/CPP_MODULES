/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/27 15:56:42 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/29 15:49:23 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Span.hpp"

Span::Span() {}

Span::~Span() {}

Span::Span(int len) :len(len) {}

Span::Span(Span const &obg) {*this  = obg;}

Span &Span::operator=(Span const &obg)
{
    if (this != &obg)
    {
        this->len = obg.len;
        this->list = obg.list;
    }
    return (*this);
}

void Span::addNumber(int n) 
{
    if ((unsigned long)this->len <= this->list.size())
        throw std::exception();
    this->list.push_back(n);
}

int Span::shortestSpan()
{
    if (this->list.size() <= 1)
        throw std::exception();

    std::vector<int> tmp = this->list;
    std::sort(tmp.begin(), tmp.end());

    int min = tmp[1] - tmp[0];

    for (std::vector<int>::iterator it = tmp.begin(); it != tmp.end() - 1; it++)
    {
        if (*(it + 1) - *it < min)
            min = *(it + 1) - *it;
    }
    return (min);
}

int Span::longestSpan()
{
    if (this->list.size() <= 1)
        throw std::exception();

    int min = this->list[0];
    int max = this->list[0];

    for (std::vector<int>::iterator it = this->list.begin(); it != this->list.end(); it++)
    {
        if (*it < min)
            min = *it;
        if (*it > max)
            max = *it;
    }
    return (max - min);
}

void Span::fill(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
    if (this->len < std::distance(begin, end))
        throw std::exception();
    this->list.insert(this->list.end(), begin, end);
}