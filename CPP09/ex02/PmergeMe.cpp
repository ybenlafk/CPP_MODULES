/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:26:37 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/23 13:00:01 by ybenlafk         ###   ########.fr       */
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
        this->Jacob = obg.Jacob;
        this->combined = obg.combined;
        this->first = obg.first;
        this->second = obg.second;
        this->chunks = obg.chunks;
        
        this->_list = obg._list;
        this->_Jacob = obg._Jacob;
        this->_combined = obg._combined;
        this->_first = obg._first;
        this->_second = obg._second;
        this->_chunks = obg._chunks;
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
    for (std::vector<node*>::iterator it = chunks.begin(); it != chunks.end(); it++)
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
    for (std::vector<node*>::iterator it = chunks.begin(); it != chunks.end(); it++)
    {
        for (std::vector<node*>::iterator it2 = chunks.begin(); it2 != chunks.end(); it2++)
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
    else
    {
        for (int i = 0; i < (int)this->list.size(); i += 2)
        {
            if (list[i] && list[i + 1])
            {
                node *wp = new node(list[i], list[i + 1]);
                this->chunks.push_back(wp);
            }
        }    
    }
    this->maxSwap();
    this->sorChunks();
    for (std::vector<node*>::iterator it = chunks.begin(); it != chunks.end(); it++)
    {
        this->first.push_back((*it)->val1);
        this->second.push_back((*it)->val2);
    }
    
    // add the first element in the second vector to the front of the first vector using insert
    this->first.insert(this->first.begin(), this->second.front());
    
    int l = 3;
    for (int i = 3; i < (int)list.size() * 4; i++)
    {
        if (i == Jacob[l])
        {
            combined.push_back(i);
            for (int j = i - 1; j > Jacob[l - 1]; j--)
                combined.push_back(j);
            l++;
        }
    }
    for (std::vector<int> ::iterator it = combined.begin(); it != combined.end(); it++)
    {
        int i = *it;
        for (int j = 1; j < (int)second.size() + 1; j++)
        {
            if (i == j)
            {
                std::vector<int>::iterator it2 = lower_bound(first.begin(), first.end(), second[j - 1]);
                first.insert(it2, second[j - 1]);
                i--;
            }
        }
    }
    if (list.size() % 2)
    {
        std::vector<int>::iterator it = lower_bound(first.begin(), first.end(), list.back());
        first.insert(it, list.back());
    }
}

// deque

void    PmergeMe::_maxSwap()
{
    for (std::deque<node*>::iterator it = _chunks.begin(); it != _chunks.end(); it++)
    {
        if ((*it)->val1 < (*it)->val2)
        {
            int tmp = (*it)->val1;
            (*it)->val1 = (*it)->val2;
            (*it)->val2 = tmp;
        }
    }
}

void    PmergeMe::_sorChunks()
{
    for (std::deque<node*>::iterator it = _chunks.begin(); it != _chunks.end(); it++)
    {
        for (std::deque<node*>::iterator it2 = _chunks.begin(); it2 != _chunks.end(); it2++)
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

void  PmergeMe::_fill(char **av)
{
    int i = 0;
    
    while (av[i])
    {
        if (!isValid(av[i]))
            throw std::invalid_argument("Invalid argument");
        this->_list.push_back(atoi(av[i]));
        i++;
    }
}


void    PmergeMe::_sort()
{
    _Jacob.push_back(0);
    _Jacob.push_back(1);

    for (int i = 2; i <= 20; ++i)
    {
        int term = *(_Jacob.end() - 1) + (2 * *(_Jacob.end() - 2));
        _Jacob.push_back(term);
    }
    
    if (_list.size() % 2)
    {
        for (int i = 0; i < (int)this->_list.size() - 1; i += 2)
        {
            if (_list[i] && _list[i + 1])
            {
                node *wp = new node(_list[i], _list[i + 1]);
                this->_chunks.push_back(wp);
            }
        }
    }
    else
    {
        for (int i = 0; i < (int)this->_list.size(); i += 2)
        {
            if (_list[i] && _list[i + 1])
            {
                node *wp = new node(_list[i], _list[i + 1]);
                this->_chunks.push_back(wp);
            }
        }    
    }
    this->_maxSwap();
    this->_sorChunks();
    for (std::deque<node*>::iterator it = _chunks.begin(); it != _chunks.end(); it++)
    {
        this->_first.push_back((*it)->val1);
        this->_second.push_back((*it)->val2);
    }
    
    // add the first element in the second vector to the front of the first vector using insert
    this->_first.insert(this->_first.begin(), this->_second.front());
    
    int l = 3;
    for (int i = 3; i < (int)_list.size() * 4; i++)
    {
        if (i == _Jacob[l])
        {
            _combined.push_back(i);
            for (int j = i - 1; j > _Jacob[l - 1]; j--)
                _combined.push_back(j);
            l++;
        }
    }
    for (std::deque<int> ::iterator it = _combined.begin(); it != _combined.end(); it++)
    {
        int i = *it;
        for (int j = 1; j < (int)_second.size() + 1; j++)
        {
            if (i == j)
            {
                std::deque<int>::iterator it2 = lower_bound(_first.begin(), _first.end(), _second[j - 1]);
                _first.insert(it2, _second[j - 1]);
                i--;
            }
        }
    }
    if (_list.size() % 2)
    {
        std::deque<int>::iterator it = lower_bound(_first.begin(), _first.end(), _list.back());
        _first.insert(it, _list.back());
    }
}
