/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:16:32 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 20:46:21 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm( const std::string target ) : 
	Form("Presidential Pardon Form", 25, 5), _target(target){
}

PresidentialPardonForm::PresidentialPardonForm() : 
	Form("Presidential Pardon Form", 25, 5), _target("Life"){
		
}

PresidentialPardonForm::~PresidentialPardonForm(){
	std::cout << "PresidentialPardonForm burned" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm& obj) : _target(obj._target){
	std::cout << "PresidentialPardonForm class copy constructor" << std::endl;

}

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm& obj){
	std::cout << "PresidentialPardonForm class copy asignment" << std::endl;
	this->_target = obj.getTarget();
	return *this;
}

std::string PresidentialPardonForm::getTarget() const{
	return this->_target;
}

void PresidentialPardonForm::execute( const Bureaucrat& execute) const {
	if (this->getIfSigned() == false)
		throw Form::FormNotSignedException();
	if (this->getReqExec() < execute.getGrade())
			throw Form::GradeTooLowException();
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox" << std::endl;
}