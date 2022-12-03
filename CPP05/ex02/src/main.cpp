#include "../includes/Bureaucrat.hpp"
#include "../includes/AForm.hpp"

int main()
{
	try
	{
		AForm form1("form 1", 1, 1);
		Bureaucrat worker("worker", 2);
		std::cout << form1 << std::endl;
		worker.signForm(form1);
		worker.increment();
		worker.signForm(form1);
		std::cout << form1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm form1("Form too high", 0, 1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		AForm form1("Form to sign", 10, 10);
		Bureaucrat worker("worker", 4);
		std::cout << form1 << std::endl;
		worker.signForm(form1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}