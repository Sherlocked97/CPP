
#include "../includes/AForm.hpp"

AForm::AForm(): _name("Default AForm"), _isSigned(0), _gradeToExecute(0), _gradeToSign(0)
{
}

AForm::AForm(const std::string name, const int gradeToSign, const int gradeToExecute): _name(name), _gradeToExecute(gradeToExecute), _gradeToSign(gradeToSign)
{
	if (gradeToExecute > 150 || gradeToSign > 150)
		throw GradeTooLowException();
	else if (gradeToSign < 1 || gradeToExecute < 1)
		throw GradeTooHighException();
	else
		_isSigned = false;
}

AForm::AForm(const AForm &other): _name(other._name), _gradeToExecute(other._gradeToExecute), _gradeToSign(other._gradeToSign)
{
	*this = other;
}

AForm	&AForm::operator=(AForm const &other)
{
	this->_isSigned = other._isSigned;
	return (*this);
}

AForm::~AForm()
{
}

std::string AForm::getName() const
{
	return (this->_name);
}

int	AForm::getGradeToSign() const
{
	return (this->_gradeToSign);
}

int	AForm::getGradeToExecute() const
{
	return (this->_gradeToExecute);
}

bool	AForm::getSignedStatus() const
{
	return (this->_isSigned);
}

void	AForm::beSigned(Bureaucrat const &worker)
{
	if (worker.getGrade() > _gradeToSign)
		throw GradeTooLowException();
	else
		_isSigned = true;
}
std::ostream	&operator<<(std::ostream &out, const AForm &AForm)
{
	out << "[" << AForm.getName() << "] has grade: [" << AForm.getGradeToExecute() << "] to execute and grade: [" << AForm.getGradeToSign() << "] to sign and its signed status is: [" << AForm.getSignedStatus() << "]"; 
	return(out);
}