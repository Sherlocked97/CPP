
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
	if (name.compare("shrubbery creation form") == 0)
		return (forms[0]->formWithName(target));
	else if (name.compare("robot my request form") == 0)
		return (forms[1]->formWithName(target));
	else if (name.compare("presidential pardon form") == 0)
		return (forms[2]->formWithName(target));
	else
		throw FormNotFound();
}