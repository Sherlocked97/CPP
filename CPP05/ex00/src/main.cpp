#include "../includes/Bureaucat.hpp"

int	main()
{
	Bureaucat Cat2("Cat2", 150);
	Bureaucat Cat3 (Cat2);
	//Bureaucat Cat1("Too High", 0);
	//Bureaucat Cat4("Too Low", 151);


	std::cout << Cat2 << std::endl;
	std::cout << Cat3 << std::endl;
	Cat3.decrement();
	std::cout << Cat3 << std::endl;
}