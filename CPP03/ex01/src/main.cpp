#include "../includes/ScavTrap.hpp"

int	main()
{
	ClapTrap fighterOne("ClapTrap");
	ScavTrap fighterTwo("ScavTrap");
	ScavTrap test = fighterTwo;
	ScavTrap test2(test);

	test.getInfos();
	test = fighterTwo;
	test.takeDamage(43);
	test.getInfos();
	fighterTwo.guardGate();
	fighterTwo.getInfos();
	fighterOne.getInfos();
}