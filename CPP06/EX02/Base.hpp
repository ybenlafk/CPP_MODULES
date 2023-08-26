/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/26 10:07:30 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/08/26 10:07:30 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PP
#define PP

#include <iostream>
#include <cstdlib>
#include <ctime>

class Base
{
  public:
    virtual ~Base();
};

class A : public Base{};

class B : public Base{};

class C : public Base{};

Base * generate(void);
void identify(Base* p);
void identify(Base& p);

#endif
