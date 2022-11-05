#include "../includes/Zombie.hpp"


Zombie::Zombie(void)
{
	return ;
}

Zombie::Zombie(std::string name) : _name(name)
{
	return ;
}

Zombie::~Zombie()
{
	return ;

}

void Zombie::announce(void) const
{
	std::cout << _name << ":  BraiiiiiiinnnzzzZ..." << std::endl;
}
