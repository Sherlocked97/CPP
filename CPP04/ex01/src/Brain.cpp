
#include "../includes/Brain.hpp"
#include <string>
// --------------------- ORTHODOX CANONICAL CLASS --------------------- //

Brain::Brain()
{
	std::string string;
	static int test;

	srand(test);
	test ++;
	for (int i = 0; i < 100; i++)
	{

		string = std::to_string(std::rand() % 10 + 0);
		this->_ideas[i] = "Test Idea" + string;
	}
	std::cout << "Default brain constructor called" << std::endl;
}

Brain::Brain(Brain const &src)
{
	*this = src;
	std::cout << "Copy constructor of brain called" << std::endl;
}

Brain &Brain::operator=(Brain const &other)
{	
	std::cout << "Brain assigment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->_ideas[i] = other._ideas[i];
	return (*this);
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

// ------------------------------------------------------------------ //

std::string	Brain::getIdea(int i) const
{
	return (this->_ideas[i]);
}

void	Brain::setIdea(int i, std::string idea)
{
	this->_ideas[i] = idea;
}

void	Brain::printFirst10Ideas() const
{
	for (int i = 0; i < 10; i++)
		std::cout << this->_ideas[i] << std::endl;
}