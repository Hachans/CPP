/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Form.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/02 18:06:03 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 20:21:37 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Form.hpp"

Form::Form() : _name("Standart Form"), _signed(false), _reqsign(75), _reqexec(75){
	std::cout << "Standart Form created" << std::endl;
}

Form::Form( const std::string name, const int sign, const int exec ) :
	_name(name), _signed(false), _reqsign(sign), _reqexec(exec){
		
	if(this->_reqsign < 1 || this->_reqexec < 1)
		throw Form::GradeTooHighException();
	if(this->_reqsign > 150 || this->_reqexec > 150)
		throw Form::GradeTooLowException();
	std::cout << "Form created" << std::endl;
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

void Form::beSigned( const Bureaucrat& obj ){
	try{
		if (obj.getGrade() > this->getReqSign())
			throw Form::GradeTooLowException();
		this->_signed = true;
	}
	catch (Form::GradeTooLowException & e){
		std::cout << e.what() << std::endl;
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
