/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:12:00 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 17:18:14 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm( const std::string target ) : 
	Form("Robotomy Request Form", 72, 42), _target(target){
	std::cout << "RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm() : 
	Form("Robotomy Request Form", 72, 42), _target("Life"){
	std::cout << "Basic RobotomyRequestForm created" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm(){
	std::cout << "RobotomyRequestForm burned" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm& obj) : _target(obj._target){
	std::cout << "RobotomyRequestForm class copy constructor" << std::endl;

}

RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm& obj){
	std::cout << "RobotomyRequestForm class copy asignment" << std::endl;
	this->_target = obj.getTarget();
	return *this;
}

std::string RobotomyRequestForm::getTarget() const{
	return this->_target;
}

void RobotomyRequestForm::execute( const Bureaucrat& execute) const {
	if (this->getIfSigned() == false)
		throw Form::FormNotSignedException();
	else
	{	if (this->getReqExec() < execute.getGrade())
			throw Form::GradeTooLowException();
		else{
			std::cout << "BRRRRRRRRRRRRRRRRRRRRRRR" << std::endl;
			srand(time(NULL));
			if ((rand() % 2) == 0)
				std::cout << "Robotomy failed" << std::endl;
			else
				std::cout << this->getTarget() << " has been robotomized successfully" << std::endl;
		}
			
	}
}