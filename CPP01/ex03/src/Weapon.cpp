#include "../includes/Weapon.hpp"

Weapon::Weapon()
{
	return ;
}

Weapon::Weapon(std::string type): _type(type)
{
	return ;
}

Weapon::~Weapon()
{
	return ;
}

std::string const &Weapon::getType(void) const
{
	return (this->_type);
}

void Weapon::setType(std::string type)
{
	_type = type;
}