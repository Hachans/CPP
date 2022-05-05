/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:14 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 11:00:07 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include	<iostream>
# include	<string>
# include	<iomanip>
# include	"Form.hpp"


class Form;

class Bureaucrat{
	
		const std::string _name;
		int _grade;
		
	public:

		Bureaucrat();
		Bureaucrat( const std::string name, int grade );
		~Bureaucrat();
		Bureaucrat(const Bureaucrat& obj);
		Bureaucrat& operator=(const Bureaucrat& boj);

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

		const std::string getName( void ) const;
		int getGrade( void ) const;
		void increment( void );
		void decrement( void );
		void signForm( const Form& obj );
		void executeForm(Form const & form);
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif