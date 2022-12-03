
#include "../includes/RobotmyRequestForm.hpp"

RobotmyRequestForm::RobotmyRequestForm(): AForm("Shrubbery Creation", 145, 137), _target("default")
{
}

RobotmyRequestForm::RobotmyRequestForm(const std::string target): AForm("Shrubbery Creation", 145, 137), _target(target)
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
	std::ofstream outfile;

	if (!this->getSignedStatus())
		throw FormNotSigned();
	else if (this->getGradeToExecute() < worker.getGrade())
		throw GradeTooLowException();
	outfile.open(_target + "_shrubbery");
	if (outfile.bad())
		throw FileOpeningFail();
	outfile << "              v .   ._, |_  .," << std::endl;
    outfile << "       \'-._\\/  .  \\ /    |/_" << std::endl;
    outfile << "           \\\\  _\\, y | \\//" << std::endl;
    outfile << "     _\\_.___\\\\, \\\\/ -.\\||" << std::endl;
    outfile << "       \'7-,--.\'._||  / / ," << std::endl;
    outfile << "       /\'     \'-.\'./ / |/_.\'" << std::endl;
    outfile << "                 |    |//" << std::endl;
    outfile << "                 |_    /   " << _target << std::endl;
    outfile << "                 |-   |" << std::endl;
    outfile << "                 |   =|" << std::endl;
    outfile << "                 |    |" << std::endl;
	outfile << "----------------/ ,  . \\--------._" << std::endl;
	outfile.close();
}