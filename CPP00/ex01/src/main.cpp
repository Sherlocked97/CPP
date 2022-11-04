#include "../includes/PhoneBook.hpp"

int	main()
{
	PhoneBook	phonebook;
	std::string	input;

	phonebook.printCmds();
	while (!std::cin.eof())
	{
		std::getline(std::cin, input);
		if (input == "ADD")
			phonebook.addContact();
		else if (input == "SEARCH")
			phonebook.searchContact();
		else if (input == "EXIT")
		{
			std::cout << "\x1B[92m" << "Exiting PhoneBook" << "\033[0m" <<std::endl;
			return (0);
		}
		else
			std::cout << "\x1B[31m" << "Please enter a valid command" << "\033[0m" <<std::endl;
	}
}