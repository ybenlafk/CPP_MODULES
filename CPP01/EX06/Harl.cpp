/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/05 15:24:44 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/05 17:44:27 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl(){}

Harl::~Harl(){}

void    Harl::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void    Harl::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put\
     enough bacon in my burger! If you did, I wouldn't be asking for more!" << std::endl;
}
void    Harl::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for \
    years whereas you started working here since last month." << std::endl;
}

void    Harl::error( void )
{
    std::cout << "This is unacceptable! I want to speak to the manager now." << std::endl;
}


void    Harl::complain( std::string level )
{
    void  (Harl::*ptr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    for(int i = 0; i < 4; i++)
    {
        if (level == list[i])
        {
            (this->*ptr[i])();
            break;
        }
    }
}

void    Harl::harlFilter( std::string level )
{
    int stat = -1;
    void  (Harl::*ptr[4])() = { &Harl::debug, &Harl::info, &Harl::warning, &Harl::error};
    std::string list[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

    for(int i = 0; i < 4; i++)
    {
        if (level == list[i])
        {
            stat = i;
            break;
        }
    }
    switch (stat)
    {
        case    0:
            std::cout << "[ DEBUG ]" << std::endl;
            (this->*ptr[0])();
            std::cout << std::endl;
        case    1:
            std::cout << "[ INFO ]" << std::endl;
            (this->*ptr[1])();
            std::cout << std::endl;
        case    2:
            std::cout << "[ WARNING ]" << std::endl;
            (this->*ptr[2])();
            std::cout << std::endl;
        case    3:
            std::cout << "[ ERROR ]" << std::endl;
            (this->*ptr[3])();
            std::cout << std::endl;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
            break;
    }
}