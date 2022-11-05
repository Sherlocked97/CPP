#include "../includes/Zombie.hpp"

int	main()
{
	Zombie	 *horde;
	int		nbZombies = 2;

	horde = zombieHorde(nbZombies, "Zombies");
	for (int i = 0; i < nbZombies; i++)
		horde[i].announce();
	delete [] horde;
	return(0);
}