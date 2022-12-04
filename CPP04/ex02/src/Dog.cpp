#include "../includes/Dog.hpp"

Dog::Dog()
{
	this->_type = "Dog";
	this->_brain = new Brain();
	std::cout << "Default Dog constructor called" << std::endl;
}

Dog::Dog(const Dog &src)
{
	*this = src;
	std::cout << "Copy constructor of Dog called" << std::endl;
}

Dog &Dog::operator=(Dog const &other)
{
	this->_type = other._type;
	*(this->_brain) = *(other._brain);
	std::cout << "Dog assigment operator called" << std::endl;
	return(*this);
}

Dog::~Dog()
{
	delete this->_brain;
	std::cout << "Dog destructor called" << std::endl;
}

void	Dog::makeSound() const
{
	std::cout << "Wau Wau" << std::endl;
}

void	Dog::printIdeas() const
{
	this->_brain->printFirst10Ideas();
	std::cout << "Dogs brain has this ideas" << std::endl;
}