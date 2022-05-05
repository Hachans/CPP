/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:12 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/02 10:21:35 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

int main(){

	{
		std::cout << "***Basic tests***" << std::endl;
		Bureaucrat a;
		std::cout << a;
		Bureaucrat b("James", 100);
		std::cout << b;
		std::cout << std::endl;
		Bureaucrat c(b);
		std::cout << c;
		std::cout << std::endl;
		
		Bureaucrat d("Kimber", 50);
		std::cout << d;
		d = a;
		std::cout << d;
	}

	{
		std::cout << std::endl << "***Increment decrement test***" << std::endl;
		Bureaucrat a("James", 110);
		std::cout << a;
		a.increment();
		a.increment();
		std::cout << a;


		std::cout << std::endl;
		std::cout << std::endl;
		
		Bureaucrat b(a);
		std::cout << b;
		b.increment();
		a.decrement();
		a.decrement();
		std::cout << b;
		std::cout << a;
	}

	{
		std::cout << std::endl << "***Exception test***" << std::endl;
		Bureaucrat a("James", 150);
		Bureaucrat b("Jimmy", 151);
		std::cout << b;
		Bureaucrat c("Bobby", 0);
		std::cout << c;

		std::cout << std::endl;
		std::cout << std::endl;
	}

	{
		std::cout << std::endl << "***Exception test 2***" << std::endl;
		Bureaucrat a("Jimmy", 150);
		a.increment();
		std::cout << a;
		a.decrement();
		std::cout << a;
		a.decrement();
		std::cout << a;

		Bureaucrat b("Charlie", 1);
		b.decrement();
		std::cout << b;
		b.increment();
		std::cout << b;
		b.increment();
		std::cout << b;
	}
	return 0;
}