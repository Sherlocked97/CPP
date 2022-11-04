#ifndef PHONEBOOK_HPP
# define PHONEBOOK_HPP
# include "Contact.hpp"
# define maxContacts 8

class PhoneBook
{
	private:
		int		_lastIndex;
		Contact	_contacts[maxContacts];
	
	public:
		PhoneBook();
		~PhoneBook();
		void	addContact(void);
		void	printCmds(void) const;
		void	searchContact(void) const;
};

# endif