#include "../includes/Harl.hpp"

int	main()
{
	Harl	test1, test2, test3, test4, test5;

	test1.complain("DEBUG");
	std::cout << std::endl;
	test2.complain("INFO");
	std::cout << std::endl;
	test3.complain("WARNING");
	std::cout << std::endl;
	test4.complain("ERROR");
	std::cout << std::endl;
	test5.complain("TEST");
}