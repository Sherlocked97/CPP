#include "../includes/Bureaucat.hpp"

Bureaucat::Bureaucat(): name_("nameless"), grade_(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Bureaucat::Bureaucat(std::string name, int grade): name_(name), grade_(grade)
{
	std::cout << "Constructor with args called" << std::endl;
}

Bureaucat::Bureaucat(Bureaucat const &src)
{
	this->name_ = src.name_;
	this->grade_ = src.grade_;
	std::cout << "Copy constructor called" << std::endl;
}

Bureaucat::~Bureaucat()
{
	std::cout << "Destructor called" << std::endl;
}

void Bureaucat::increment(void)
{
	this->grade_--;
}

void Bureaucat::decrement(void)
{
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

bool	Bureaucat::gradeTooHigh(void)
{
	if (this->grade_ < 1)
		return (true);
	return (false);
}

bool	Bureaucat::gradeTooLow(void)
{
	if (this->grade_ > 150)
		return (true);
	return (false);
}

std::ostream& operator << (std::ostream& out, const Bureaucat &cat)
{
	out << cat.getName();
	out << ", bureaucat grade ";
	out << cat.getGrade();
	return (out);
}