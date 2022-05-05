/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/04 16:34:08 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	{
		std::cout << "***Basic test***" << std::endl;
		Bureaucrat a("Amanda", 15);
		Form f1("Form1", 10, 10);
		Form f2("Form2", 20, 20);
		Form f3("Form3", 0, 10);
		Form f4("Form4", 151, 20);

		std::cout << std::endl;
		f1.beSigned(a);
		a.signForm(f1);
		std::cout << f1;
		std::cout << std::endl;
		f2.beSigned(a);
		a.signForm(f2);
		std::cout << f2;
	}

	{
		std::cout << std::endl << "***Basic form test 2***" << std::endl;
		Bureaucrat a("Amanda", 15);
		Form f1("Form1", 20, 20);

		std::cout << std::endl;
		
		Form f2(f1);
		std::cout << f1;
		std::cout << f2 << std::endl;

		f1.beSigned(a);
		std::cout << f1;

		std::cout << std::endl;
		
		Form f3;
		std::cout << f3;
		f3 = f1;
		std::cout << std::endl;
		std::cout << f3;
	}
	
	return 0;
}