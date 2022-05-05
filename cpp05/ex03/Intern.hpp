/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 11:37:56 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 17:41:04 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

class	Intern{
	private:

		Form* makeppf( std::string const target );
		Form* makerrf( std::string const target );
		Form* makescf( std::string const target );

	public:

		Intern();
		~Intern();
		Intern(const Intern& obj);
		Intern& operator=(const Intern& boj);

		class FormNotFoundException : public std::exception{
			public:
				const char* what() const throw(){
					return "This type of form does not exist.";
				}
		};

		Form* makeForm( std::string form, const std::string target );
		typedef Form* (Intern::*getFunc)( const std::string );

};

#endif