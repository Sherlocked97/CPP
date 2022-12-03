
#pragma once

#include <string>
#include <iostream>
#include "Form.hpp"

class Form;

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

		std::string	getName() const;
		int			getGrade() const;

		void		signForm(Form &form) const;
		void		decrement();
		void		increment();

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