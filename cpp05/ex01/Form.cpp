/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:06:03 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/04 16:34:34 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form( const std::string name, const int sign, const int exec ) :
	_name(name), _signed(false), _reqsign(sign), _reqexec(exec){
	// std::cout << "Form created" << std::endl;
	try{
		if(this->_reqsign < 1 || this->_reqexec < 1)
			throw Form::GradeTooHighException();
		if(this->_reqsign > 150 || this->_reqexec > 150)
			throw Form::GradeTooLowException();
	}
	catch (Form::GradeTooLowException & e){
		std::cout << e.what() << std::endl;
	}
	catch (Form::GradeTooHighException & e){
		std::cout << e.what() << std::endl;
	}
}

Form::Form() :
	_name("Standart form"), _signed(false), _reqsign(75), _reqexec(75){
	// std::cout << "Standart form created" << std::endl;
}

Form::~Form(){
	std::cout << "Form burned" << std::endl;
}

Form::Form(const Form& obj) : _name(obj._name), _reqsign(obj._reqsign), _reqexec(obj._reqexec){
	std::cout << "Form class copy constructor" << std::endl;
	this->_signed = obj._signed;
}

Form& Form::operator=(const Form& obj){
	std::cout << "Form class copy asignment" << std::endl;
	this->_signed = obj._signed;
	return *this;
}

const std::string Form::getName() const{
	return this->_name;
}

bool Form::getIfSigned() const{
	return this->_signed;
}

int Form::getReqExec() const{
	return this->_reqexec;
}

int Form::getReqSign() const{
	return this->_reqsign;
}

bool Form::beSigned( const Bureaucrat& obj ){
	try{
		if (obj.getGrade() > this->getReqSign())
		{
			throw Form::GradeTooLowException();
		}
		else
		{
			this->_signed = true;
			return true;
		}
	}
	catch (Form::GradeTooLowException & e){
		std::cout << e.what() << std::endl;
		return false;
	}
}

std::ostream& operator<<(std::ostream& os, const Form& obj){
	std::string sign;
	if (obj.getIfSigned() == true)
		sign = " signed";
	else
		sign = " not signed";
	return (os << "Form " << obj.getName() << ", Status:" << sign << std::endl << "Min grade to sign: " << obj.getReqSign() << ", Min grade to execute: " << obj.getReqExec() <<  std::endl);
}
