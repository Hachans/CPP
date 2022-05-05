/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardo	PresidentialPardonForm:.hpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/04 16:07:21 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/04 16:08:00 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

# include	"Form.hpp"

class Bureaucrat;

class	PresidentialPardonForm : public Form{

		std::string _target;
		
	public:

		PresidentialPardonForm();
		PresidentialPardonForm( const std::string _target );
		~PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm& obj);
		PresidentialPardonForm& operator=(const PresidentialPardonForm& boj);

		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;
};

#endif