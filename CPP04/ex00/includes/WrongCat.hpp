
#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	protected:
	
	public:
		WrongCat();
		WrongCat(const WrongCat &src);
		WrongCat &operator=(const WrongCat &other);
		~WrongCat();

		void	makeSound() const;
} ;