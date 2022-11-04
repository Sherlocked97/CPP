#ifndef CONTACT_HPP
# define CONTACT_HPP
# include <iostream>
# include <iomanip>
# include <string>

class Contact
{
	private:
		int			_index;
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
	
	public:
		Contact();
		~Contact();
		void	fillContact(int index);
		void	displayContact(void) const;
		void	displayContactDetails(void) const;
		void	setIndex(int index);
};

# endif