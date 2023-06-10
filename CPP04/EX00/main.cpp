/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/10 13:10:02 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/10 13:26:35 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main()
{
    Animal *animal = new Animal();
    Animal *dog = new Dog();
    Animal *cat = new Cat();
    
    animal->makeSound();
    dog->makeSound();
    cat->makeSound();
    
    delete animal;
    delete dog;
    delete cat;
    return (0);
}