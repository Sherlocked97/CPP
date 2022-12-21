#include "../includes/Span.hpp"

int	main(void)
{
	{
		std::cout << "TESTING SPAN FROM SUBJECT\n";
		Span	sp = Span(5);

		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
		std::cout << sp << std::endl;

		std::cout << "shortest span\t" << sp.shortestSpan() << std::endl;
		std::cout << "longest span \t" << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\nTESTING SPAN SIMILAR TO SUBJECT\n";
		Span	sp = Span(5);

		sp.addNumber(5);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(12);
		sp.addNumber(11);
		std::cout << sp << std::endl;

		std::cout << "shortest span\t" << sp.shortestSpan() << std::endl;
		std::cout << "longest span \t" << sp.longestSpan() << std::endl;
	}
	{
		std::cout << "\nTESTING EMPTY SPAN\n";
		Span	sp = Span(3);

		sp.addNumber(5);
		std::cout << sp;

		try
		{
			std::cout << "shortest span " << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << "?\t";
			std::cerr << e.what() << std::endl;
		}

		try
		{		
			std::cout << "longest span " << sp.longestSpan() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << "?\t";
			std::cerr << e.what() << std::endl << std::endl;
		}

		try
		{	
			std::cout << "ADDING NUMBERS TO SPAN\n";
			sp.addNumber(6012);
			std::cout << sp << std::endl;
			sp.addNumber(-791);
			std::cout << sp << std::endl;
			std::cout << "ADDING TOO MUCH NUMBERS TO SPAN\n";
			sp.addNumber(832);
			std::cout << sp << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "\nSHORTEST AND LONGEST SPAN FROM  PRIOR ADDED NUMBERS\n";
		std::cout << "shortest span\t" << sp.shortestSpan() << std::endl;
		std::cout << "longest span \t" << sp.longestSpan() << std::endl;
	}
	// {
	// 	std::vector<int>	vect;
	// 	Span				sp = Span(100000);

	// 	srand(time(NULL));
	// 	for (int i = 1; i <= 100000; i++)
	// 		vect.push_back(i);
	// 	sp.fillRange< std::vector<int> >(vect.begin(), vect.end());
	// 	std::cout << sp << std::endl;
	// 	std::cout << "shortest span \t" << sp.shortestSpan() << std::endl;
	// 	std::cout << "longest span  \t" << sp.longestSpan() << std::endl;
	// }
	return (0);
}