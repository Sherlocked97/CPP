#include "../includes/Contact.hpp"

Contact::Contact(void)
{
	return ;
}

Contact::~Contact(void)
{
	return ;
}

void	Contact::fillContact(int index)
{
	_index = index;
	std::cout << "\x1B[92m" <<"Please fill the following informations." << "\033[0m" <<std::endl;
	std::cout << std::setw(17) << "First name  ";
	std::getline(std::cin, _firstName);
	std::cout << std::setw(17) << "Last name  ";
	std::getline(std::cin, _lastName);
	std::cout << std::setw(17) << "Nickname  ";
	std::getline(std::cin, _nickname);
	std::cout << std::setw(17) << "Phone number  ";
	std::getline(std::cin, _phoneNumber);
	std::cout << std::setw(17) << "Darkest secret  ";
	std::getline(std::cin, _darkestSecret);
}

void	Contact::setIndex(int index)
{
	_index = index;
}

static void	printTenChar(std::string str)
{
	int len;

	len = str.length();
	if (len <= 10)
		std::cout << str;
	else
		std::cout << str.substr(0, 9);
}

void	Contact::displayContact(void) const
{
	std::string	index = "";

	index += _index + '0';
	printTenChar(index);
	std::cout << " | ";
	printTenChar(_firstName);
	std::cout << " | ";
	printTenChar(_lastName);
	std::cout << " | ";
	printTenChar(_nickname);
	std::cout << std::endl;
}

void	Contact::displayContactDetails(void) const
{
	std::cout << std::setw(17) << "First name  " << _firstName << std::endl;
	std::cout << std::setw(17) << "Last name  " << _lastName << std::endl;
	std::cout << std::setw(17) << "Nickname  " << _nickname << std::endl;
	std::cout << std::setw(17) << "Phone number  " << _phoneNumber << std::endl;
	std::cout << std::setw(17) << "Darkest secret  " << _darkestSecret << std::endl;;
}
