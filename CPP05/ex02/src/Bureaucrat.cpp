#include "../includes/Bureaucrat.hpp"

Bureaucrat::Bureaucrat()
{
}

Bureaucrat::Bureaucrat(std::string name, int grade): _name(name)
{
	if (grade < 1)
		throw GradeTooHighException();
	else if (grade > 150)
		throw GradeTooLowException();
	else
		_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat &src)
{
	*this = src;
}

Bureaucrat &Bureaucrat::operator=(Bureaucrat const &other)
{
	this->_grade = other._grade;
	return (*this);
}

Bureaucrat::~Bureaucrat()
{
}

std::string Bureaucrat::getName() const
{
	return(this->_name);
}

int	Bureaucrat::getGrade() const
{
	return(this->_grade);
}

void	Bureaucrat::increment()
{
	this->_grade--;
	if (_grade < 1)
		throw GradeTooHighException();
}

void	Bureaucrat::decrement()
{
	this->_grade++;
	if (_grade > 150)
		throw GradeTooLowException();
}

void	Bureaucrat::signForm(AForm &aform) const
{
	try
	{
		aform.beSigned(*this);
		std::cout << getName() << " signed " << aform.getName() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cout << getName() << " couldn't sign " << aform.getName() << std::endl;
	}
}

std::ostream	&operator<<(std::ostream &out, const Bureaucrat &worker)
{
	out << worker.getName() << " , grade " << worker.getGrade();
	return(out);
}