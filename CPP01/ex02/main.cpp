#include <iostream>
#include <string>

int	main()
{
	std::string		str = "HI THIS IS BRAIN";
	std::string		*stringPTR = &str;
	std::string		&stringREF = str;

	std::cout << "Addres of str: " << &str << std::endl;
	std::cout << "	using stringPTR" << stringPTR << std::endl;
	std::cout << "	using stringREF" << &stringREF << std::endl;
	std::cout << "Content of str: " << str << std::endl;
	std::cout << "	using stringPTR" << *stringPTR << std::endl;
	std::cout << "	using stringREF" << stringREF << std::endl;
}