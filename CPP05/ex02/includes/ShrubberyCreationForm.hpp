
#pragma once

#include "Form.hpp"

class ShrubberyCreationForm: public Form
{
	private:
		std::string	_target;
	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		~ShrubberyCreationForm();

		ShrubberyCreationForm	&operator=(ShrubberyCreationForm const &obj);
		void	action() const;
		Form	*clone(std::string target);
} ;