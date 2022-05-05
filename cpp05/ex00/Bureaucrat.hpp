/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.hpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:14 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/02 18:04:06 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include	<iostream>
# include	<string>

class Bureaucrat{
	
		const std::string _name;
		unsigned int _grade;
		
	public:

		Bureaucrat();
		Bureaucrat( const std::string name, unsigned int grade );
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
		unsigned int getGrade( void ) const;
		void increment( void );
		void decrement( void );
};

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj);

#endif