
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
		virtual ~AForm();

		std::string	getName() const;
		int			getGradeToSign() const;
		int			getGradeToExecute() const;
		bool		getSignedStatus() const;
		void		beSigned(Bureaucrat const &worker);
		virtual void	execute(const Bureaucrat &worker) const = 0;

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

		class FormNotSigned: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form is not signed yet!");
				}
		} ;

		class FileOpeningFail: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Couldn't open outfile for ShrubberyCreationForm!");
				}
		} ;

} ;

std::ostream &operator<<(std::ostream &out, const AForm &AForm);