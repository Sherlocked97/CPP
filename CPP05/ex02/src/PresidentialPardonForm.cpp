#include "../includes/PresidentialPardonFrom.hpp"

PresidentialPardonForm::PresidentialPardonForm() : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = "None";
}

PresidentialPardonForm::PresidentialPardonForm(std::string _target) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = _target;
}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm const &src) : Form("PresidentialPardonForm", 25, 5)
{
	this->_target = src._target;
}

PresidentialPardonForm::~PresidentialPardonForm() {

}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &obj)
{
	this->_target = obj._target;
	return *this;
}

void PresidentialPardonForm::action() const
{
	std::cout << this->_target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
}

Form * PresidentialPardonForm::clone(std::string _target)
{
	return new PresidentialPardonForm(_target);
}