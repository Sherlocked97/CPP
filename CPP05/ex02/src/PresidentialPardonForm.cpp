
#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("Shrubbery Creation", 145, 137), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("Shrubbery Creation", 145, 137), _target(target)
{
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &src)
{
	*this = src;
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &other)
{
	return (*this);
}

void	PresidentialPardonForm::execute(const Bureaucrat &worker) const
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