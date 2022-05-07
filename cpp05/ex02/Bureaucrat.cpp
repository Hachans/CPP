/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/01 11:11:17 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 20:16:06 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat( const std::string name, int grade ) : _name(name){
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException();
	this->_grade = grade;
	std::cout << "Bureaucrat " << _name <<  " appeared" << std::endl;

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

int Bureaucrat::getGrade( void ) const{
	return this->_grade;
}

void Bureaucrat::increment( void ){
	try{
		if (this->_grade - 1 < 1)
			throw Bureaucrat::GradeTooHighException();
		this->_grade -= 1;
	}
	catch (Bureaucrat::GradeTooHighException & e){
		std::cout << e.what() << '\n';
		this->_grade = 1;
	}
}

void Bureaucrat::decrement( void ){
	try{
		if (this->_grade + 1 > 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade += 1;
	}
	catch (Bureaucrat::GradeTooLowException & e){
		std::cout << e.what() << '\n';
		this->_grade = 150;
	}
}

void Bureaucrat::signForm( const Form& obj ){
	if (obj.getIfSigned() == true)
		std::cout << this->getName() << " signed " << obj.getName() << std::endl;
	else
		std::cout << this->getName() << " couldn't sign " << obj.getName() << " because some reason" << std::endl;
}

void Bureaucrat::executeForm( Form const & form){
	try{
		form.execute(*this);
		std::cout << this->getName() << " executed " << form.getName() << std::endl;
	}
	catch(Form::FormNotSignedException & e){
		std::cout << e.what() << ", Speak to the manager" << std::endl;
	}
	catch(Form::GradeTooLowException & e){
		std::cout << "Rejected execution: " << e.what() << std::endl;
	}
}

std::ostream& operator<<(std::ostream& os, const Bureaucrat& obj){
	return (os << obj.getName() + ", bureaucrat grade " << obj.getGrade() << std::endl);
}
