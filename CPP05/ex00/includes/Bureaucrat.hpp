
#pragma once

#include <string>
#include <iostream>

class Bureaucrat
{
	private:
		const std::string 	_name;
		int					_grade;

	public:
		Bureaucrat();
		Bureaucrat(std::string name, int grade);
		Bureaucrat(const Bureaucrat &src);
		Bureaucrat &operator=(const Bureaucrat &other);
		virtual ~Bureaucrat();

		void		decrement();
		void		increment();
		std::string	getName() const;
		int			getGrade() const;

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

std::ostream &operator<<(std::ostream &out, const Bureaucrat &worker);