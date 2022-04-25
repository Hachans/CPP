/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/12 15:17:44 by ekraujin          #+#    #+#             */
/*   Updated: 2022/04/24 13:54:24 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

#include <iostream>
#include <string>
#include <iomanip>

class Contact {
	public:
	std::string first_name;
	std::string last_name;
	std::string nick_name;
	std::string phone_number;
	std::string darkest_secret;
	void set_firstname(std::string& str);
	void set_lastname(std::string& str);
	void set_nickname(std::string& str);
	void set_phone(std::string& str);
	void set_secret(std::string& str);
	Contact(void);
	~Contact(void);
};

#endif