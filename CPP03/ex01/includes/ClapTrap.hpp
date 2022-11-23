#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
		std::string		_name;
		int		_health;
		int		_energy;
		int		_attackDamage;
	public:
		ClapTrap(std::string name);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned	int amount);
		void		setHP(int newHp);
		void		setEnergy(int newEnergy);
		void		setAD(int newAD);
		std::string	getName(void) const;
		void		getInfos(void) const;
} ;

#endif