#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie
{
	private:
		std::string	_name;
	
	public:
		Zombie();
		Zombie(std::string);
		~Zombie();

		void		setName(std::string);
		void		announce(void) const;
};

Zombie* zombieHorde( int N, std::string name );

#endif