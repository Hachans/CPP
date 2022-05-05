/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 17:37:54 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 11:26:30 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FORM_HPP
# define FORM_HPP

# include	"Bureaucrat.hpp"

class Bureaucrat;

class Form{

		const std::string _name;
		bool _signed;
		const int _reqsign;
		const int _reqexec;
		
	public:

		Form();
		Form( const std::string name, const int sign, const int exec );
		virtual ~Form();
		Form(const Form& obj);
		Form& operator=(const Form& boj);

		class GradeTooHighException : public std::exception{
			public:
				const char* what() const throw(){
					return "Grade too high.";
				}
		};

		class FormNotSignedException : public std::exception{
			public:
				const char* what() const throw(){
					return "Form is not signed";
				}
		};

		class GradeTooLowException : public std::exception{
			public:
				const char* what() const throw(){
					return "Grade too low.";
				}
		};
		
		virtual void beSigned( const Bureaucrat& obj );
		virtual bool getIfSigned() const;
		virtual const std::string getName() const;
		virtual int getReqSign() const;
		virtual int getReqExec() const;
		virtual void execute(Bureaucrat const & executor) const = 0;
		
};

std::ostream& operator<<(std::ostream& os, const Form& obj);

#endif