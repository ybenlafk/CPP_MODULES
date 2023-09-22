/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PmergeMe.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 17:24:12 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/09/22 12:25:55 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef YY
# define YY

#include <iostream>
#include <algorithm>
#include <sstream>
#include <string>
#include <vector>
#include <list>

struct node
{
    int val1;
    int val2;
    node(int val1, int val2) : val1(val1), val2(val2) {}
};

class   PmergeMe
{
    public:
        std::vector<int> list;
        std::vector<int> Jacob;
        std::vector<int> combined;
        std::vector<int> first;
        std::vector<int> second;
        std::list<node*> chunks;

        PmergeMe();
        PmergeMe(PmergeMe const &obg);
        ~PmergeMe();
        PmergeMe & operator=(PmergeMe const &obg);
        void        fill(char **av);
        void        sort();
        void        maxSwap();
        void        sorChunks();
};


#endif