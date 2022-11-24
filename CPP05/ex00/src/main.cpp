#include "../includes/Bureaucat.hpp"

int	main()
{
	Bureaucat Cat1;
	Bureaucat Cat2("Cat2", 20);
	Bureaucat Cat3 (Cat2);


	std::cout << Cat1 << std::endl;
	std::cout << Cat2 << std::endl;
	std::cout << Cat3 << std::endl;
	Cat3.decrement();
	std::cout << Cat3 << std::endl;
}