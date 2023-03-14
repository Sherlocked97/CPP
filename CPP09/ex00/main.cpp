#include "BitcoinExchange.hpp"

int	main(int argc, char *argv[])
{
	BCExchange FTX;

	if (argc != 2)
		std::cout << "Use: ./BitcoinExchange <youtFile.txt>" << std::endl;
	else
		FTX.getUserValue(argv[1]);
}