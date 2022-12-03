
#include "../includes/Form.hpp"

Form::Form(): _name("Default form"), _isSigned(0), _gradeToExecute(0), _gradeToSign(0)
{
}

Form::Form(const std::string name, const int gradeToSign, const int gradeToExecute): _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else
		_isSigned = false;
}

Form::Form(const Form &other): _name(other._name), _gradeToExecute(other._gradeToExecute), _gradeToSign(other._gradeToSign)
{
	*this = other;
}

Form	&Form::operator=(Form const &other)
{
	this->_isSigned = other._isSigned;
	return (*this);
}

Form::~Form()
{
}

std::string Form::getName() const
{
	return (this->_name);
}

int	Form::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	Form::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

bool	Form::getSignedStatus() const
{
	return (this->_isSigned);
}

void	Form::beSigned(Bureaucrat const &worker)
{
	if (worker.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}
std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << "[" << form.getName() << "] has grade: [" << form.getGradeToExecute() << "] to execute and grade: [" << form.getGradeToSign() << "] to sign and its signed status is: [" << form.getSignedStatus() << "]"; 
	return(out);
}