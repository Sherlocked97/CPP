#include "../includes/FragTrap.hpp"

// --------------------- ORTHODOX CANONICAL CLASS --------------------- //

FragTrap::FragTrap(): ClapTrap("Default")
{
	setAD(20);
	setEnergy(50);
	setHP(100);
	std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(FragTrap const &src): ClapTrap(src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

FragTrap &FragTrap::operator=(FragTrap const &other)
{	
	setAD(getAD());
	setEnergy(getEnergy());
	setHP(getHP());
	return (*this);
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap destructor called" << std::endl;
}
// ------------------------------------------------------------------ //

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	setAD(20);
	setEnergy(50);
	setHP(100);
}

void	FragTrap::guardGate()
{
	std::cout << "FragTrap \"" << getName() << "\" is now in gatemode" << std::endl;
}