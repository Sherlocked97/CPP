
#ifndef ANIMAL_HPP
#define ANIMAL_HPP

#include <iostream>

class Animal
{
	protected:
		std::string _type;

	public:
		Animal();
		Animal(Animal const &src);
		Animal &operator=(Animal const &other);
		virtual ~Animal();

		std::string getType() const;
		void makeSound() const;
} ;

#endif