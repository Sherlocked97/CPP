#ifndef CLAPPTRAP_H
#define CLAPPTRAP_H

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		int				_health;
		int				_energy;
		int				_attackDamage;
	public:
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &other);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int	amount);
		void	beRepaired(unsigned	int amount);
		void	getInfos(void) const;
} ;

#endif