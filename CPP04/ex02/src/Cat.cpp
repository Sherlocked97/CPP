#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
	this->_brain = new Brain();
	std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Copy constructor of cat called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	this->_type = other._type;
	*(this->_brain) = *(other._brain);
	std::cout << "Cat assigment operator called" << std::endl;
	return(*this);
}

Cat::~Cat()
{
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}

void	Cat::printIdeas() const
{
	this->_brain->printFirst10Ideas();
	std::cout << "Cats brain has this ideas" << std::endl;
}