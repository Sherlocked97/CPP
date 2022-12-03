
#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string 	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		Form();
		Form(const std::string, const int, const int);
		Form(const Form &src);
		Form &operator=(const Form &other);
		~Form();

		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		bool		getSignedStatus() const;
		void		beSigned(Bureaucrat const &worker);

		class GradeTooHighException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too high!");
				}
		} ;

		class GradeTooLowException: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Grade is too low!");
				}
		} ;	

} ;

std::ostream &operator<<(std::ostream &out, const Form &form);