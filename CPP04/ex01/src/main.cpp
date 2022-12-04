#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"


void	creation(int size)
{
	std::cout << "THIS IS THE CREATION" << std::endl;
	Animal	*arrayAnimals[size];

	for (int i = 0; i < size / 2; i++)
	{
		arrayAnimals[i] = new Dog();
		arrayAnimals[i + size / 2] = new Cat;
	}
	for (int i = 0; i < size; i++)
		delete arrayAnimals[i];
}

void deepCopy()
{
	Cat cat1;
	for (long i = 0; i < 1000000000; i++);
	Cat cat2;

	cat1.printIdeas();
	std::cout << std::endl;
	cat2.printIdeas();

	cat2 = cat1;

	cat1.printIdeas();
	std::cout << std::endl;
	cat2.printIdeas();
}

int main()
{
	creation(4);

	deepCopy();

	const Animal test;
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;//should not create a leak
	delete i;
	
	return 0;
}