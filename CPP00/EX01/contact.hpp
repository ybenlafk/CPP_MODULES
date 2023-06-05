/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:09:05 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/05/29 15:53:29 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream> 

class Contact
{
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string darkest_secret;
    std::string phone_number;
    int         index;
    public:
        Contact();
        ~Contact();
        void        print_contact(void);
        void        fill_contact(int index);
        std::string get_in(std::string);
        std::string get_first_name(void)
        {
            std::string s;
            if (this->first_name.length() > 10)
            {
                s = this->first_name.substr(0, 9);
                s += ".";
                return (s);
            }
            else if (this->first_name.length() <= 10)
                return (this->first_name);
            return (this->first_name);
        }
        std::string get_last_name(void)
        {
            std::string s;
            if (this->last_name.length() > 10)
            {
                s = this->last_name.substr(0, 9);
                s += ".";
                return (s);
            }
            else if (this->last_name.length() <= 10)
                return (this->last_name);
            return (this->last_name);
        }
        std::string get_nickname(void)
        {
            std::string s;
            if (this->nickname.length() > 10)
            {
                s = this->nickname.substr(0, 9);
                s += ".";
                return (s);
            }
            else if (this->nickname.length() <= 10)
                return (this->nickname);
            return (this->nickname);
        }
        int        get_index(void)
        {
            return (this->index);
        }
};

#endif