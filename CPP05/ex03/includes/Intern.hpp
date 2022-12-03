
#pragma once 

#include "Bureaucrat.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotmyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"

class AForm;

class Intern
{
	private:
		AForm *forms[3];

	public:
		Intern();
		Intern(const Intern &src);
		Intern &operator=(const Intern &other);
		virtual ~Intern();

		AForm *makeForm(std::string name, std::string target) const;

		class FormNotFound: public std::exception
		{
			public:
				virtual const char *what() const throw()
				{
					return ("Form wasn't found!");
				}
		} ;
} ;