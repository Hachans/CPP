/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 11:36:28 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main(){

	{
		std::cout << "***PresidentialPardonForm test***" << std::endl;
		Bureaucrat a("James", 5);
		std::cout << a;
		PresidentialPardonForm f;
		std::cout << f;

		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}

	{
		std::cout << std::endl << "***RobotomyRequestForm test***" << std::endl;
		Bureaucrat a("James", 73);
		std::cout << a;
		RobotomyRequestForm f("Civilization");
		std::cout << f;

		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}

	{
		std::cout << std::endl << "***ShrubberyCreationForm test***" << std::endl;
		Bureaucrat a("James", 137);
		std::cout << a;
		ShrubberyCreationForm f("House");
		std::cout << f;

		std::cout << std::endl;

		f.beSigned(a);
		std::cout << f;
		a.executeForm(f);
		std::cout << std::endl;
	}
	
	return 0;
}