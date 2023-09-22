/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:26:37 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/22 15:20:42 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(PmergeMe const &obg) {*this = obg;}

PmergeMe &PmergeMe::operator=(PmergeMe const &obg)
{
    if (this != &obg)
    {
        this->list = obg.list;
    }
    return (*this);
}

bool    isValid(std::string num)
{
    for (int i = 0; num[i]; i++)
        if (!isdigit(num[i]))
            return (false);
    return (true);
}

void    PmergeMe::maxSwap()
{
    for (std::list<node*>::iterator it = chunks.begin(); it != chunks.end(); it++)
    {
        if ((*it)->val1 < (*it)->val2)
        {
            int tmp = (*it)->val1;
            (*it)->val1 = (*it)->val2;
            (*it)->val2 = tmp;
        }
    }
}

void    PmergeMe::sorChunks()
{
    for (std::list<node*>::iterator it = chunks.begin(); it != chunks.end(); it++)
    {
        for (std::list<node*>::iterator it2 = chunks.begin(); it2 != chunks.end(); it2++)
        {
            if ((*it)->val1 < (*it2)->val1)
            {
                int tmp = (*it)->val1;
                (*it)->val1 = (*it2)->val1;
                (*it2)->val1 = tmp;
                tmp = (*it)->val2;
                (*it)->val2 = (*it2)->val2;
                (*it2)->val2 = tmp;
            }
        }
    }
}

void  PmergeMe::fill(char **av)
{
    int i = 0;
    
    while (av[i])
    {
        if (!isValid(av[i]))
            throw std::invalid_argument("Invalid argument");
        this->list.push_back(atoi(av[i]));       
        i++;
    }
}


void    PmergeMe::sort()
{
    Jacob.push_back(0);
    Jacob.push_back(1);

    for (int i = 2; i <= 20; ++i)
    {
        int term = *(Jacob.end() - 1) + (2 * *(Jacob.end() - 2));
        Jacob.push_back(term);
    }
    if (list.size() % 2)
    {
        for (int i = 0; i < (int)this->list.size() - 1; i += 2)
        {
            if (list[i] && list[i + 1])
            {
                node *wp = new node(list[i], list[i + 1]);
                this->chunks.push_back(wp);   
            }
        }
    }
    for (std::list<node*>::iterator it = chunks.begin(); it != chunks.end(); it++)
    {
        this->first.push_back((*it)->val1);
        this->second.push_back((*it)->val2);
    }
    
    this->first.front() = this->second.front();
    this->second.erase(this->second.begin());
    
    int l = 3;
    for (int i = 3; i < (int)list.size() * 2; i++)  
    {
        if (i == Jacob[l])
        {
            combined.push_back(i);
            for (int j = i - 1; j > Jacob[l - 1]; j--)
                combined.push_back(j);
            l++;
        }
    }
}