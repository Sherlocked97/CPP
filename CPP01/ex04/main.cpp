#include <iostream>
#include <string>
#include <fstream>

int	main(int argc, char **argv)
{
	std::ifstream infile;
	std::ofstream outfile;

	if (argc != 4)
	{
		std::cout << "Wrong ammount of args!" << std::endl;
		return (1);
	}
	infile.open(argv[1]);
	
}