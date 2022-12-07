#include "../includes/Span.hpp"

int	main(void)
{
	{
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
		Span	sp = Span(3);

		sp.addNumber(5);
		std::cout << sp << std::endl;

		try
		{
			std::cout << "shortest span\t" << sp.shortestSpan() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << "?\t";
			std::cerr << e.what() << std::endl;
		}

		try
		{		
			std::cout << "longest span \t" << sp.longestSpan() << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cout << "?\t";
			std::cerr << e.what() << std::endl;
		}

		try
		{	
			sp.addNumber(6012);
			std::cout << sp << std::endl;
			sp.addNumber(-791);
			std::cout << sp << std::endl;
			sp.addNumber(832);
			std::cout << sp << std::endl;
		}
		catch(const std::exception &e)
		{
			std::cerr << e.what() << std::endl;
		}

		std::cout << "shortest span\t" << sp.shortestSpan() << std::endl;
		std::cout << "longest span \t" << sp.longestSpan() << std::endl;
	}
	{
		std::vector<int>	vect;
		Span				sp = Span(100000);

		srand(time(NULL));
		for (int i = 1; i <= 100000; i++)
			vect.push_back(i);
		sp.fillRange< std::vector<int> >(vect.begin(), vect.end());
		std::cout << sp << std::endl;
		std::cout << "shortest span \t" << sp.shortestSpan() << std::endl;
		std::cout << "longest span  \t" << sp.longestSpan() << std::endl;
	}
	return (0);
}