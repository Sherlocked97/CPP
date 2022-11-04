#include "../includes/PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	_lastIndex = -1;
	return ;
}

PhoneBook::~PhoneBook(void)
{
	return ;
}

void	PhoneBook::addContact(void)
{

	if (_lastIndex == maxContacts - 1)
	{
		for(int i = 0; i < maxContacts; i++)
		{
			_contacts[i] = _contacts[i + 1];
			_contacts[i].setIndex(i);
		}
		_contacts[_lastIndex].fillContact(_lastIndex);
	}
	else
	{
		_lastIndex++;
		_contacts[_lastIndex].fillContact(_lastIndex);
	}
	std::cout << std::endl;
}

static int	strToInt(std::string str)
{
	int	i = 0;
	int res = 0;

	while (str[i] && str[i] >= '0' && str[i] <= '9')
	{
		res = 10 * res + str[i] - '0';
		i++;
	}
	if (str[i])
		return (-1);
	return (res);
}

void	PhoneBook::searchContact(void) const
{
	int			index = -1;
	std::string	indexStr;

	if (_lastIndex == -1)
	{
		std::cout << "\x1B[31m" << "You have zero contacts in your phonebook" << "\033[0m" << std::endl;
		return ;
	}
	for (int i = 0; i <= _lastIndex; i++)
		_contacts[i].displayContact();
	std::cout << std::endl;
	while (index < 0 || index > _lastIndex)
	{
		std::cout << "\x1B[92m" << "Enter a valid Index " <<  "\033[0m";
		std::getline(std::cin, indexStr);
		index = strToInt(indexStr);
	}
	if (index != -1)
		_contacts[index].displayContactDetails();
	std::cout << std::endl;
}

void	PhoneBook::printCmds(void) const
{
	std::cout << "Following commands are allowed: " << std::endl;
	std::cout << "\x1B[92m" << " ADD | SEARCH | EXIT" << "\033[0m" << std::endl << std::endl;
}