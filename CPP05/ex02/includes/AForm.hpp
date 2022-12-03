
#pragma once

#include "Bureaucrat.hpp"

class Bureaucrat;

class AForm
{
	private:
		const std::string 	_name;
		bool				_isSigned;
		const int			_gradeToSign;
		const int			_gradeToExecute;

	public:
		AForm();
		AForm(const std::string, const int, const int);
		AForm(const AForm &src);
		AForm &operator=(const AForm &other);
		~AForm();

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

std::ostream &operator<<(std::ostream &out, const AForm &AForm);