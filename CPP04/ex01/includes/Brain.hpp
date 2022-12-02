#include "Animal.hpp"

#pragma once

class Brain
{
	protected:
		std::string _ideas[100];
	
	public:
		Brain();
		Brain (const Brain &src);
		Brain &operator=(Brain const &other);
		virtual ~Brain();

		std::string	getIdea(int i) const;
		void	setIdea(int i, std::string idea);
} ;