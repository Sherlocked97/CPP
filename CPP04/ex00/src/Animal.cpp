#include "../includes/Animal.hpp"

Animal::Animal()
{
	std::cout << "Default animal constructor called" << std::endl;
}

Animal::Animal(Animal const &src)
{
	*this = src;
	std::cout << "Animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(Animal const &other)
{
	this->_type = other._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

std::string Animal::getType() const
{
	return (this->_type);
}

void	Animal::makeSound() const
{
	std::cout << "No known animal sound" << std::endl;
}