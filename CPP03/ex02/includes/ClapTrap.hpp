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
		ClapTrap();
		ClapTrap(std::string name);
		ClapTrap(ClapTrap const &src);
		ClapTrap &operator=(ClapTrap const &other);
		~ClapTrap();

		void		attack(const std::string& target);
		void		takeDamage(unsigned int	amount);
		void		beRepaired(unsigned	int amount);
		void		setHP(int newHp);
		int			getHP(void) const;
		void		setEnergy(int newEnergy);
		int			getEnergy(void) const;
		void		setAD(int newAD);
		int			getAD(void) const;
		std::string	getName(void) const;
		void		getInfos(void) const;
} ;

#endif