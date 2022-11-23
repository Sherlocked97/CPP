#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->type = "Dog";
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Copy constructor of Dog called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	this->type = other.type;
	std::cout << "Dog assigment operator called" << std::endl;
	return(*this);
}

Dog::~Dog()
{
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wau Wau" << std::endl;
}