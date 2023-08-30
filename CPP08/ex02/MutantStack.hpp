/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MutantStack.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/28 14:55:42 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/29 16:00:05 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <algorithm>
#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
    public:
        MutantStack() : std::stack<T>() {}
        MutantStack(MutantStack const & src) : std::stack<T>(src) {}
        ~MutantStack() {}
        MutantStack & operator=(MutantStack const & src) { std::stack<T>::operator=(src); return (*this); }
        // the non const version
        typedef typename std::stack<T>::container_type::iterator iterator;
        iterator begin() { return std::stack<T>::c.begin(); }
        iterator end() { return std::stack<T>::c.end(); }
        iterator rbegin() { return std::stack<T>::c.rbegin(); }
        iterator rend() { return std::stack<T>::c.rend(); }
        // the const version
        typedef typename std::stack<T>::container_type::const_iterator const_iterator;
        const_iterator begin() const { return std::stack<T>::c.begin(); }
        const_iterator end() const { return std::stack<T>::c.end(); }
        const_iterator rbegin() const { return std::stack<T>::c.rbegin(); }
        const_iterator rend() const { return std::stack<T>::c.rend(); }
};