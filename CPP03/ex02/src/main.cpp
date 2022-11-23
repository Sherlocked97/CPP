#include "../includes/ScavTrap.hpp"
#include "../includes/FragTrap.hpp"

int	main()
{
	ClapTrap fighterOne("ClapTrap");
	ScavTrap fighterTwo("ScavTrap");
	FragTrap fighterThree("FragTrap");

	fighterTwo.guardGate();
	fighterThree.highFiveGuys();
	fighterThree.getInfos();
	fighterTwo.getInfos();
	fighterOne.getInfos();
}