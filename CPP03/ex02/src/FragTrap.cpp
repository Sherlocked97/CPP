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
	this->setName(other.getName());
	this->setAD(other.getAD());
	this->setEnergy(other.getEnergy());
	this->setHP(other.getHP());
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
	ClapTrap::attack("Name");
	setAD(20);
	setEnergy(50);
	setHP(100);
}

void	FragTrap::highFiveGuys()
{
	std::cout << "FragTrap \"" << this->getName() << "\" High Fives Guys!" << std::endl;
}