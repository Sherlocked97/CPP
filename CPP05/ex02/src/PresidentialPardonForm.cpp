
#include "../includes/PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(): AForm("PresidentialPardonForm", 25, 5), _target("default")
{
}

PresidentialPardonForm::PresidentialPardonForm(const std::string target): AForm("PresidentialPardonForm", 25, 5), _target(target)
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
	if (!this->getSignedStatus())
		throw FormNotSigned();
	else if (this->getGradeToExecute() < worker.getGrade())
		throw GradeTooLowException();
	std::cout << _target << " has been pardoned by Zaphod Bleeblebrox" << std::endl;
}