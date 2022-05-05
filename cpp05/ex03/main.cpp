/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 17:48:18 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "Intern.hpp"

int	main(){
	
	{
		Intern	someRandomIntern;
		Form*	rrf;
		Bureaucrat a("Amanda", 1);
		
		rrf = someRandomIntern.makeForm("robotomy request", "Bender");
		
		if (rrf){
			std::cout << *rrf << std::endl << std::endl;
			
			rrf->beSigned(a);
			std::cout << *rrf << std::endl << std::endl;

			rrf->execute(a);
			delete rrf;
		}
	}

	return (0);
}