
#include "../includes/Form.hpp"

Form::Form() : name_("nameless"), isSigned_(false), gradeForSign_(150), gradeForExecute_(150)
{
}

Form::Form(std::string name, const int gradeForSign, const int gradeForExecute): name_(name), gradeForSign_(gradeForSign), gradeForExecute_(gradeForExecute)
{
	if (gradeForSign < 1 || gradeForExecute < 1)
		throw GradeTooHighException();
	else if (gradeForSign > 150 || gradeForExecute > 150)
		throw GradeTooLowException();
	else
		isSigned_ = false;
}

Form::~Form()
{
}

Form::Form(Form const &src): name_(src.name_), gradeForSign_(src.gradeForSign_), gradeForExecute_(src.gradeForExecute_)
{
	this->isSigned_ = src.isSigned_;
}

std::string	const Form::getName() const
{
	return (this->name_);
}

int const Form::getGradeForExecute() const
{
	return (this->gradeForExecute_);
}

int const Form::getGradeForSign() const
{
	return (this->gradeForSign_);
}

bool const Form::getSignedStatus() const
{
	return (this->isSigned_);
}

void	Form::sign(Bureaucat &cat)
{
	if (cat.getGrade() <= this->gradeForSign_)
		this->isSigned_ = true;
	else
		throw GradeTooLowException();
}

const char	*Form::GradeTooHighException::what() const throw()
{
	return ("Grade too high!");
}

const char	*Form::GradeTooLowException::what() const throw()
{
	return ("Grade too low!");
}

std::ostream	&operator<<(std::ostream &out, const Form &form)
{
	out << form.getName() << ", form grade " << form.getGradeForSign() << " to sign and " << form.getGradeForExecute() << " to execute";
	return (out);
}
