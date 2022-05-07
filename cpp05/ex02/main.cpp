/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 20:48:14 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){

	std::cout << "***Presidential test***"<< std::endl;
	try{
		Bureaucrat a("James", 1);
		std::cout << a;
		PresidentialPardonForm f;
		std::cout << f;
		
		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "***Robotomy test***"<< std::endl;
	try{
		Bureaucrat a("James", 50);
		std::cout << a;
		RobotomyRequestForm f("Coal miners");
		std::cout << f;
		
		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	std::cout << "***Schrubbery test***"<< std::endl;
	try{
		Bureaucrat a("James", 130);
		std::cout << a;
		ShrubberyCreationForm f;
		std::cout << f;
		
		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	return 0;
}