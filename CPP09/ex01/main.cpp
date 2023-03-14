#include "RPN.hpp"

int	main(int argc, char *argv[])
{

	if (argc != 2)
		std::cout << "Use: ./RPN \"your inverted Polish mathematical expression\"" << std::endl;
	else
		rpn(argv[1]);
}