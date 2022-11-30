
#pragma once

#include "Form.hpp"

class PresidentialPardonForm: public Form
{
	private:
		std::string	_target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm(const PresidentialPardonForm &src);
		~PresidentialPardonForm();

		PresidentialPardonForm	&operator=(PresidentialPardonForm const &obj);
		void	action() const;
		Form	*clone(std::string target);
} ;