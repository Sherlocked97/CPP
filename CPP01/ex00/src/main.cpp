#include "../includes/Zombie.hpp"

int	main()
{
	Zombie zombie1("Z_NBR1");
	Zombie zombie2("Z_NBR2");
	Zombie zombie3;

	zombie1.announce();
	zombie2.announce();
	zombie3.announce();

	randomChump("Z_RANDOM");

	Zombie *zNew = newZombie("Z_NEW");
	zNew->announce();
	delete(zNew);

	return(0);
}