#include "../includes/ClapTrap.hpp"


ClapTrap::ClapTrap(std::string name): _name(name), _energy(10), _health(10), _attackDamage(0)
{
	std::cout << "Constructor called" << std::endl;
}

ClapTrap::~ClapTrap(void)
{
	std::cout << "Destrctor called" << std::endl;
}

void	ClapTrap::attack(const std::string &target)
{
	if (this->_energy > 0 && this->_health > 0)
	{
		this->_energy--;
		std::cout << "Fighter \"" << this->_name << "\" attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	}
	else
		std::cout << "Fighter \"" << this->_name << "\" is dead or has no energy left" << std::endl;	
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (this->_energy > 0 && this->_health > 0)
	{
		this->_health -= amount;
		this->_energy--;
		std::cout << "Fighter \"" << this->_name << "\" has taken: " << amount << " damage and has now: " << this->_health << " hp" << std::endl;
	}
	else
		std::cout << "Fighter \"" << this->_name << "\" is dead or has no energy left" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int	amount)
{
	if (this->_energy > 0 && this->_health > 0)
	{
		this->_health += amount;
		this->_energy--;
		std::cout << "Fighter \"" << this->_name << "\" has repaired itself for: " << amount << " hp and has now: " << this->_health << " hp" << std::endl;
	}
	else
		std::cout << "Fighter \"" << this->_name << "\" is dead or has no energy left" << std::endl;
}

void	ClapTrap::getInfos(void) const
{
	std::cout << "Fighter: \"" << _name << "\" has these attributes:" << std::endl;
	std::cout << "HP: " << _health << std::endl;
	std::cout << "ENERGY: " << _energy << std::endl;
	std::cout << "AD: " << _attackDamage << std::endl;
}