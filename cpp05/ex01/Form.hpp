/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:37:54 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/04 16:32:40 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include	<iostream>
# include	<string>
# include	<iomanip>
# include	"Bureaucrat.hpp"

class Bureaucrat;

class Form{

		const std::string _name;
		bool _signed;
		const int _reqsign;
		const int _reqexec;
		
	public:

		Form( const std::string name, const int sign, const int exec );
		Form();
		~Form();
		Form(const Form& obj);
		Form& operator=(const Form& boj);

		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw(){
					return "Grade too high.";
				}
		};

		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw(){
					return "Grade too low.";
				}
		};
		
		bool beSigned( const Bureaucrat& obj );
		bool getIfSigned() const;
		const std::string getName() const;
		int getReqSign() const;
		int getReqExec() const;
		
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif