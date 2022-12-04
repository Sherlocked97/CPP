#include "../includes/ScavTrap.hpp"

// --------------------- ORTHODOX CANONICAL CLASS --------------------- //

ScavTrap::ScavTrap(): ClapTrap("Default")
{
	setAD(20);
	setEnergy(50);
	setHP(100);
	std::cout << "Scavtrap default constructor called" << std::endl;
}

ScavTrap::ScavTrap(ScavTrap const &src): ClapTrap(src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

ScavTrap &ScavTrap::operator=(ScavTrap const &other)
{
	this->setName(other.getName());
	this->setAD(other.getAD());
	this->setEnergy(other.getEnergy());
	this->setHP(other.getHP());
	return (*this);
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "ScavTrap destructor called" << std::endl;
}
// ------------------------------------------------------------------ //

ScavTrap::ScavTrap(std::string name): ClapTrap(name)
{
	std::cout << "ScavTrap constructor called" << std::endl;
	this->setAD(20);
	this->setEnergy(50);
	this->setHP(100);
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap \"" << getName() << "\" is now in gatemode" << std::endl;
}