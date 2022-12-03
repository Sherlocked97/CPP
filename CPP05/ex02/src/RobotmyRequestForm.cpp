
#include "../includes/RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(): AForm("RobotRequestForm", 72, 45), _target("default")
{
}

RobotmyRequestForm::RobotmyRequestForm(const std::string target): AForm("RobotRequestForm", 72, 45), _target(target)
{
}

RobotmyRequestForm::RobotmyRequestForm(const RobotmyRequestForm &src)
{
	*this = src;
}

RobotmyRequestForm::~RobotmyRequestForm()
{
}

RobotmyRequestForm &RobotmyRequestForm::operator=(const RobotmyRequestForm &other)
{
	return (*this);
}

void	RobotmyRequestForm::execute(const Bureaucrat &worker) const
{
	int	robot;

	if (!this->getSignedStatus())
		throw FormNotSigned();
	else if (this->getGradeToExecute() < worker.getGrade())
		throw GradeTooLowException();
	srand(time(NULL));
	robot = rand() % 2 + 0;
	std::cout << "bZzzzZZZ rzzzzZZzzzzZZ ";
	if (robot)
		std::cout << _target << " was robotmized" << std::endl;
	else
		std::cout << _target << " was not robotmized" << std::endl;	
}