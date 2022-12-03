#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"
#include "../includes/ShrubberyCreationForm.hpp"


int main()
{
	try
	{
		AForm *form1 =  new ShrubberyCreationForm("Baum");
		Bureaucrat worker("worker", 140);
		worker.signForm(*form1);
		worker.executeForm(*form1);
		delete form1;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}