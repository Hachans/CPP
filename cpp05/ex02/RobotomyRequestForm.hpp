/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.hpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:11:07 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 11:31:00 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

# include	"Form.hpp"

class Bureaucrat;

class	RobotomyRequestForm : public Form{

		std::string _target;
		
	public:

		RobotomyRequestForm();
		RobotomyRequestForm( const std::string _target );
		~RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm& obj);
		RobotomyRequestForm& operator=(const RobotomyRequestForm& boj);

		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;
};

#endif