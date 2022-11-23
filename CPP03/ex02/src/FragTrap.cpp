#include "../includes/FragTrap.hpp"

FragTrap::FragTrap(std::string name): ClapTrap(name)
{
	std::cout << "FragTrap constructor called" << std::endl;
	setAD(30);
	setEnergy(50);
	setHP(100);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFiveGuys(void)
{
	std::cout << "FragTrap \"" << getName() << "\": Whoo! High Five Guys!" << std::endl;
}