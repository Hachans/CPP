/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 20:05:33 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	try{
		Bureaucrat a;
		std::cout << a;
		a.increment();
		std::cout << a;
		std::cout << std::endl;
		Bureaucrat b("James", 100);
		std::cout << b;
		b.decrement();
		std::cout << b;
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		Bureaucrat a("James", 0);
		std::cout << a;
		a.decrement();
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	
	std::cout << std::endl;
	try{
		Bureaucrat a("James", 151);
		std::cout << a;
		a.increment();
	}
	catch(std::exception & e){
		std::cout << "Exception cought " << e.what() << std::endl;
	}
	return 0;
}