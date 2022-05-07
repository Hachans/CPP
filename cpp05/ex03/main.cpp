/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 21:00:42 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(){
	
	std::cout << "***Presidential test***"<< std::endl;
	try{
		Intern	someRandomIntern;
		Form*	rrf;
		Bureaucrat a("Amanda", 5);
		
		rrf = someRandomIntern.makeForm("presidential pardon", "Bender");
		if (rrf){
			
		std::cout << *rrf << std::endl;
		
		rrf->beSigned(a);
		std::cout << *rrf << std::endl;

		a.executeForm(*rrf);
		std::cout << std::endl;
		}
		
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***Robotomy test***"<< std::endl;
	try{
		Intern	someRandomIntern;
		Form*	rrf;
		Bureaucrat a("Amanda", 42);
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		if (rrf){
			
		std::cout << *rrf << std::endl;
		
		rrf->beSigned(a);
		std::cout << *rrf << std::endl;

		a.executeForm(*rrf);
		std::cout << std::endl;
		}
		
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}

	std::cout << std::endl;
	std::cout << std::endl;
	std::cout << "***Shruberry test***"<< std::endl;
	try{
		Intern	someRandomIntern;
		Form*	rrf;
		Bureaucrat a("Amanda", 137);
		
		rrf = someRandomIntern.makeForm("shrubbery creation", "Bender");
		if (rrf){
			
		std::cout << *rrf << std::endl;
		
		rrf->beSigned(a);
		std::cout << *rrf << std::endl;

		a.executeForm(*rrf);
		std::cout << std::endl;
		}
		
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}

	return (0);
}