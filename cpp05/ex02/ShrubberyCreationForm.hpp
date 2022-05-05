/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ShrubberyCreationForm.hpp                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ekraujin <ekraujin@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/05 10:42:31 by ekraujin          #+#    #+#             */
/*   Updated: 2022/05/05 11:31:03 by ekraujin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP

# include	"Form.hpp"
# include	<fstream>

class Bureaucrat;

class	ShrubberyCreationForm : public Form{

		std::string _target;
		
	public:

		ShrubberyCreationForm();
		ShrubberyCreationForm( const std::string _target );
		~ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm& obj);
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm& boj);

		void execute(Bureaucrat const & executor) const;
		std::string getTarget() const;
};

#endif