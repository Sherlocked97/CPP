#include "../includes/Cat.hpp"

Cat::Cat()
{
	this->_type = "Cat";
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
	std::cout << "Cat assigment operator called" << std::endl;
	return(*this);
}

Cat::~Cat()
{
	std::cout << "Cat destructor called" << std::endl;
}
