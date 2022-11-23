#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->type = "Cat";
	std::cout << "Default cat constructor called" << std::endl;
}

Cat::Cat(const Cat &src)
{
	*this = src;
	std::cout << "Copy constructor of cat called" << std::endl;
}

Cat &Cat::operator=(Cat const &other)
{
	this->type = other.type;
	std::cout << "Cat assigment operator called" << std::endl;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}

void	Cat::makeSound() const
{
	std::cout << "Miau Miau" << std::endl;
}