#include "../includes/Bureaucrat.hpp"

int main()
{
	try
	{
		Bureaucrat test1("Worker", 1);
		std::cout << test1 << std::endl;
		test1.decrement();
		std::cout << test1 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat test2("Worker is to high", 1);
		std::cout << test2 << std::endl;
		test2.increment();
		std::cout << test2 << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	try
	{
		Bureaucrat test3("Worker is to low", 200);
		std::cout << test3 << std::endl;
		test3.increment();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	return (0);
}