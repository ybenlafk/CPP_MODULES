/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybenlafk <ybenlafk@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 21:09:05 by ybenlafk          #+#    #+#             */
/*   Updated: 2023/06/07 13:55:12 by ybenlafk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP
#include <iostream> 

class Contact
{
    private:
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
        std::string get_first_name(void);
        std::string get_last_name(void);
        std::string get_nickname(void);
        int        get_index(void);
};

#endif