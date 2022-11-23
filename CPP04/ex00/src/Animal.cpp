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
	this->type = other.type;
	std::cout << "Animal assignment operator called" << std::endl;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->type);
}

void	Animal::makeSound() const
{
	std::cout << "No known animal sound" << std::endl;
}