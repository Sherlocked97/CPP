#include "../includes/ScavTrap.hpp"

int	main()
{
	ClapTrap fighterOne("ClapTrap");
	ScavTrap fighterTwo("ScavTrap");

	fighterTwo.guardGate();
	fighterTwo.getInfos();
	fighterOne.getInfos();
}