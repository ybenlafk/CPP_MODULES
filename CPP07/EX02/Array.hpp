/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 15:58:01 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/26 18:26:06 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

template <typename T>
class Array
{
    private:
        T *array;
        unsigned int _size;
    public:
        Array(void): array(NULL), _size(0){}
        Array(unsigned int n): array(new T[n]), _size(n){}
        Array(Array const & src): array(NULL), _size(0){*this = src;}
        ~Array(void){delete [] array;}
        unsigned int size(void) const{return (_size);}
        Array & operator=(Array const & src)
        {
            if (this != &src)
            {
                delete [] array;
                _size = src._size;
                array = new T[_size];
                for (unsigned int i = 0; i < _size; i++)
                    array[i] = src.array[i];
            }
            return (*this);
        }
        T & operator[](unsigned int i)
        {
            if (i >= _size || i < 0)
                throw std::exception();
            return (array[i]);
        }
};