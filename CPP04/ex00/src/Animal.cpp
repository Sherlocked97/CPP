#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	this->_type = other._type;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	if (_type.compare("Cat") == 0)
		std::cout << "Miau Miau" << std::endl;
	else if (_type.compare("Dog") == 0)
		std::cout << "Wau Wau" << std::endl;
	else
		std::cout << "No known animal sound" << std::endl;
}