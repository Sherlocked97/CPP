
#pragma once

#include "AForm.hpp"

class PresidentialPardonForm: public AForm
{
	private:
		const std::string	_target;

	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &src);
		PresidentialPardonForm(const std:: string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &other);
		virtual ~PresidentialPardonForm();

		void	execute(const Bureaucrat &worker) const;
} ;