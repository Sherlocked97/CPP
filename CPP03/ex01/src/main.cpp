#include "../includes/ScavTrap.hpp"

int	main()
{
	ClapTrap fighterOne("ClapTrap");
	ScavTrap fighterTwo("ScavTrap");
	ScavTrap test;

	test.getInfos();
	test = fighterTwo;
	test.getInfos();
	fighterTwo.guardGate();
	fighterTwo.getInfos();
	fighterOne.getInfos();
}