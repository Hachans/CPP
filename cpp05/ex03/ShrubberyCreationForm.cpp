/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.cpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:42:00 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 17:18:34 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm( const std::string target ) : 
	Form("Shrubbery Creation Form", 145, 137), _target(target){
	std::cout << "ShrubberyCreationForm created" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm() : 
	Form("Shrubbery Creation Form", 145, 137), _target("Life"){
	std::cout << "Basic ShrubberyCreationForm created" << std::endl;
		
}

ShrubberyCreationForm::~ShrubberyCreationForm(){
	std::cout << "ShrubberyCreationForm burned" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm& obj) : _target(obj._target){
	std::cout << "ShrubberyCreationForm class copy constructor" << std::endl;

}

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm& obj){
	std::cout << "ShrubberyCreationForm class copy asignment" << std::endl;
	this->_target = obj.getTarget();
	return *this;
}

std::string ShrubberyCreationForm::getTarget() const{
	return this->_target;
}

void ShrubberyCreationForm::execute( const Bureaucrat& execute) const {
	if (this->getIfSigned() == false)
		throw Form::FormNotSignedException();
	else
	{	if (this->getReqExec() < execute.getGrade())
			throw Form::GradeTooLowException();
		else{
			std::string name = this->getTarget() + "_shrubbery";
			std::ofstream outfile(name);
			outfile << "                     - - -" << std::endl;
			outfile << "                   -        -  -     --    -" << std::endl;
			outfile << "                -                 -         -  -" << std::endl;
			outfile << "                                -" << std::endl;
			outfile << "                               -                --" << std::endl;
			outfile << "               -          -            -              -" << std::endl;
			outfile << "               -            '-,        -               -" << std::endl;
			outfile << "               -              'b      *" << std::endl;
			outfile << "                -              '$    #-                --" << std::endl;
			outfile << "               -    -           $:   #:               -" << std::endl;
			outfile << "             --      -  --      *#  @):        -   - -" << std::endl;
			outfile << "                          -     :@,@):   ,-**:'   -" << std::endl;
			outfile << "              -      -,         :@@*: --**'      -   -" << std::endl;
			outfile << "                       '#o-    -:(@'-@*'  -" << std::endl;
			outfile << "               -  -       'bq,--:,@@*'   ,*      -  -" << std::endl;
			outfile << "                          ,p$q8,:@)'  -p*'      -" << std::endl;
			outfile << "                   -     '  - '@@Pp@@*'    -  -" << std::endl;
			outfile << "                   -  - --    Y7'.'     -  -" << std::endl;
			outfile << "                              :@):." << std::endl;
			outfile << "                             .:@:'." << std::endl;
			outfile << "                           .::(@:.      -Sam Blumenstein-" << std::endl;
			
			outfile.close();
		}
	}
}