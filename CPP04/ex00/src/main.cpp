#include "../includes/Animal.hpp"
#include "../includes/Dog.hpp"
#include "../includes/Cat.hpp"
#include "../includes/WrongAnimal.hpp"
#include "../includes/WrongCat.hpp"


int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	const WrongAnimal* wronganimal = new WrongAnimal();
	const WrongAnimal* wrongcat = new WrongCat();

	std::cout << j->getType() << " should be dog" << std::endl;
	std::cout << i->getType() << " should be cat" << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	wronganimal->makeSound();
	wrongcat->makeSound();
	delete meta;
	delete j;
	delete i;
	delete wronganimal;
	delete wrongcat;
	return 0;
}