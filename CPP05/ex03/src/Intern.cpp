
#include "../includes/Intern.hpp"

Intern::Intern()
{
	this->forms[0] = new ShrubberyCreationForm();
	this->forms[1] = new RobotmyRequestForm();
	this->forms[2] = new PresidentialPardonForm();
}

Intern::Intern(const Intern &src)
{
	*this = src;
}

Intern &Intern::operator=(const Intern &other)
{
	this->forms[0] = other.forms[0];
	this->forms[1] = other.forms[1];
	this->forms[2] = other.forms[2];
	return (*this);
}

Intern::~Intern()
{
	delete forms[0];
	delete forms[1];
	delete forms[2];
}

AForm	*Intern::makeForm(std::string name, std::string target) const
{
	int i = 0;

	while (i < 3)
	{
		if (target.compare(forms[i]->getName()) == 0)
			break;
		i++;
	}
	if (i == 3)
		throw FormNotFound();
	return (forms[i]->formWithName(target));
}