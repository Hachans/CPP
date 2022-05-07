/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 19:57:59 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(){

	{
		std::cout << "***Basic test***" << std::endl;
		Bureaucrat a("Amanda", 15);
		try{
			Form f1("Form1", 10, 10);
			std::cout << f1;
			f1.beSigned(a);
			std::cout << f1;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
		std::cout << std::endl;
		try{
			Form f2("Form2", 20, 20);
			std::cout << f2;
			f2.beSigned(a);
			std::cout << f2;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
		std::cout << std::endl;
		try{
			Form f3("Form3", 0, 10);
			f3.beSigned(a);
			std::cout << f3;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
		std::cout << std::endl;
		try{
			Form f4("Form4", 151, 20);
			f4.beSigned(a);
			std::cout << f4;
		}
		catch(std::exception & e){
			std::cout << "Exception cought " << e.what() << std::endl;
		}
	
	}
	
	return 0;
}