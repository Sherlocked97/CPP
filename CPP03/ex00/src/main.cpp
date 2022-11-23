#include "../includes/ClapTrap.hpp"

int	main()
{
	ClapTrap fighterOne("ClapTrap");


	fighterOne.getInfos();
	fighterOne.attack("Some other thing");
	fighterOne.beRepaired(10);
	fighterOne.takeDamage(4);
	fighterOne.getInfos();
}