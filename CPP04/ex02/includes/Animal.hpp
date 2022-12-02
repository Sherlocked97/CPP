
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;
		Animal();
		Animal(Animal const &src);

	public:
		Animal &operator=(Animal const &other);
		virtual ~Animal();

		std::string getType() const;
		virtual void	makeSound() const;
} ;

#endif