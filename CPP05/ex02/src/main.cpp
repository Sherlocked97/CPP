#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"
#include "../includes/RobotmyRequestForm.hpp"
#include "../includes/PresidentialPardonForm.hpp"


int main()
{
	try
	{
		AForm *newForm =  new ShrubberyCreationForm("Baum");
		Bureaucrat worker("Official for Shrubbery forms", 1);
		worker.signForm(*newForm);
		worker.executeForm(*newForm);
		delete newForm;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm *newForm =  new RobotmyRequestForm("Request xYz");
		Bureaucrat worker("Official for Robot forms", 1);
		worker.signForm(*newForm);
		worker.executeForm(*newForm);
		delete newForm;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
		try
	{
		AForm *newForm =  new PresidentialPardonForm("Request xYz");
		Bureaucrat worker("Official for Presidential Pardon forms", 10);
		worker.signForm(*newForm);
		worker.executeForm(*newForm);
		delete newForm;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}