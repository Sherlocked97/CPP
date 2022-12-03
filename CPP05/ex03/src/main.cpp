#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotmyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"
#include "../includes/Intern.hpp"


int main()
{
	try
	{
		Intern	someRandomIntern;
		AForm *newForm;

		newForm = someRandomIntern.makeForm("shrubbery creation form", "test target");
		Bureaucrat worker("Official for Shrubbery forms", 1);
		worker.signForm(*newForm);
		worker.executeForm(*newForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Intern	someRandomIntern;
		AForm *newForm;

		newForm = someRandomIntern.makeForm("robot my request form", "rOBOt XYz");
		Bureaucrat worker("Official for Robot forms", 1);
		worker.signForm(*newForm);
		worker.executeForm(*newForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		Intern newIntern;
		AForm *newForm;

		newForm = newIntern.makeForm("presidential pardon form", "murder");
		Bureaucrat worker("Official for Presidential Pardon forms", 3);
		worker.signForm(*newForm);
		worker.executeForm(*newForm);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}