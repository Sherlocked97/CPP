#include "../includes/Bureaucat.hpp"

Bureaucat::Bureaucat(): name_("nameless"), grade_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucat::Bureaucat(std::string name, int grade): name_(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		grade_ = grade;
}

Bureaucat::Bureaucat(Bureaucat const &src)
{
	this->name_ = src.name_;
	this->grade_ = src.grade_;
}

Bureaucat::~Bureaucat()
{
}

void Bureaucat::increment(void)
{
	if (this->grade_ == 1)
		throw GradeTooHighException();
	this->grade_--;
}

void Bureaucat::decrement(void)
{
	if (this->grade_ == 150)
		throw GradeTooLowException();
	this->grade_++;
}

std::string Bureaucat::getName(void) const
{
	return (this->name_);
}

int	Bureaucat::getGrade(void) const
{
	return (this->grade_);
}

const char	*Bureaucat::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char	*Bureaucat::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}


std::ostream& operator << (std::ostream& out, const Bureaucat &cat)
{
	out << cat.getName();
	out << ", bureaucat grade ";
	out << cat.getGrade();
	return (out);
}