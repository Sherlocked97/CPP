
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		Animal();
		Animal(Animal const &src);
		std::string _type;

	public:
		Animal &operator=(Animal const &other);
		virtual ~Animal();

		std::string getType() const;
		virtual void	makeSound() const = 0;
} ;

#endif