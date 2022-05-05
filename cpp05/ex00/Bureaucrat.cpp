/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:17 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/02 18:04:16 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, unsigned int grade ) : _name(name){
	std::cout << "Bureaucrat " << _name <<  " appeared" << std::endl;
	try
	{
		if (grade > 150)
			throw Bureaucrat::GradeTooLowException();
		else if (grade < 1)
			throw Bureaucrat::GradeTooHighException();
		else{
			this->_grade = grade;
		}
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 75;
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << std::endl;
		this->_grade = 75;
	}
}

Bureaucrat::Bureaucrat() : _name("Normal Bureaucrat"), _grade(150){
	std::cout << "Normal Bureaucrat appeared" << std::endl;
}

Bureaucrat::~Bureaucrat(){
	std::cout << "Bureaucrat left the job" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat& obj) : _name("Another Normal Bureaucrat"){
	std::cout << "Bureaucrat class copy constructor" << std::endl;
	this->_grade = obj._grade;
}

Bureaucrat& Bureaucrat::operator=(const Bureaucrat& obj){
	std::cout << "Bureaucrat class copy asignment" << std::endl;
	this->_grade = obj._grade;
	return *this;
}

const std::string Bureaucrat::getName( void ) const{
	return this->_name;
}

unsigned int Bureaucrat::getGrade( void ) const{
	return this->_grade;
}

void Bureaucrat::increment( void ){
	try
	{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		else{
			this->_grade -= 1;
		}
	}
	catch (Bureaucrat::GradeTooHighException & e)
	{
		std::cout << e.what() << '\n';
		this->_grade = 1;
	}
}

void Bureaucrat::decrement( void ){
	try
	{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		else{
			this->_grade += 1;
		}
	}
	catch (Bureaucrat::GradeTooLowException & e)
	{
		std::cout << e.what() << '\n';
		this->_grade = 150;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
	return (os << obj.getName() + ", bureaucrat grade " << obj.getGrade() << std::endl);
}
