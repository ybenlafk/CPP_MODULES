/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:24:12 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/23 13:05:55 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YY
# define YY

#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <deque>
#include <ctime>

struct node
{
    int val1;
    int val2;
    node(int val1, int val2) : val1(val1), val2(val2) {}
};

class   PmergeMe
{
    public:
        // vector
        std::vector<int> list;
        std::vector<int> Jacob;
        std::vector<int> combined;
        std::vector<int> first;
        std::vector<int> second;
        std::vector<node*> chunks;
        // list
        std::deque<int> _list;
        std::deque<int> _Jacob;
        std::deque<int> _combined;
        std::deque<int> _first;
        std::deque<int> _second;
        std::deque<node*> _chunks;
        
        PmergeMe();
        PmergeMe(PmergeMe const &obg);
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const &obg);

        // vector
        void        fill(char **av);
        void        sort();
        void        maxSwap();
        void        sorChunks();
        // list
        void        _fill(char **av);
        void        _sort();
        void        _maxSwap();
        void        _sorChunks();
};


#endif