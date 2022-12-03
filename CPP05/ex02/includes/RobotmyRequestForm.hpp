
#pragma once

#include "AForm.hpp"

class RobotmyRequestForm: public AForm
{
	private:
		const std::string	_target;

	public:
		RobotmyRequestForm();
		RobotmyRequestForm(const RobotmyRequestForm &src);
		RobotmyRequestForm(const std:: string target);
		RobotmyRequestForm &operator=(const RobotmyRequestForm &other);
		virtual ~RobotmyRequestForm();

		void	execute(const Bureaucrat &worker) const;
} ;