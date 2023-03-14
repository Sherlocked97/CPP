#include "PmergeMe.hpp"

int	main(int argc, char *argv[])
{

	if (argc < 2)
		std::cout << "Use: ./PmergeMe x y z . . ." << std::endl;
	else
	{
		try
		{
			PmergeMe	numbersToSort(argv);

			// numbersToSort.printDeque();
			// numbersToSort.printList();
			numbersToSort.sort();
		}
		catch(const std::exception& e)
		{
			std::cerr << e.what() << '\n';
		}
	}
}