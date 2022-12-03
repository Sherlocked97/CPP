
#pragma once

#include "AForm.hpp"

class ShrubberyCreationForm: public AForm
{
	private:
		const std::string	_target;

	public:
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &src);
		ShrubberyCreationForm(const std:: string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &other);
		virtual ~ShrubberyCreationForm();

		void	execute(const Bureaucrat &worker) const;
} ;