/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/09 20:23:03 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/16 15:19:59 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
    private:
        std::string name;
        int hit_points;
        int energy_points;
        int attack_damage;
    public:
        ClapTrap();
        ClapTrap(std::string name);
        ClapTrap(ClapTrap const &clp);
        ClapTrap& operator = (ClapTrap const &clp);
        ~ClapTrap();
        void attack(const std::string& target);
        void takeDamage(unsigned int amount);
        void beRepaired(unsigned int amount);
};

#endif

//At a low level, inheritance in C++ is typically implemented using a mechanism called vtable and vptr. 
//When a class contains virtual functions, the compiler creates a vtable for that class, which is a table of pointers to the virtual functions. 
//Each object of the class contains a pointer to the vtable, called the virtual pointer or vptr, which is used to access the virtual functions.

// When a derived class inherits from a base class, the compiler creates a new vtable for the derived class,
// which includes all the virtual functions inherited from the base class as well as any new virtual functions defined in the derived class. 
// The vptr in an object of the derived class points to this new vtable.

// In addition to the vtable and vptr, the compiler also generates code to handle the layout of objects in memory. 
// When a derived class is created, memory is allocated for both the derived class and its base class(es), 
// with the base class subobject typically placed at the beginning of the derived class object. 
// This allows objects of the derived class to be treated as objects of the base class, 
// since the memory layout of the base class subobject is the same as if it were a standalone object of the base class.

// When a virtual function is called on an object of a derived class, the vptr is used to access the appropriate function pointer from the vtable, 
// based on the actual type of the object. This process is called dynamic dispatch or dynamic binding, 
// since the function to call is determined at runtime based on the actual type of the object.

// In summary, inheritance in C++ is implemented at a low level using vtables and vptrs, 
// which allow objects of derived classes to access virtual functions inherited from base classes as well as new virtual functions defined in the derived class. 
// The memory layout of objects is also handled by the compiler to allow objects of derived classes to be treated as objects of base classes.