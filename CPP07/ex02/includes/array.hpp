
#pragma once

#include <iostream>

template<typename T>
class Array
{
	private:
		T				*_array;
		unsigned int	_len;
	
	public:
		Array();
		Array(unsigned int len);
		Array(const Array<T> &src);
		Array &operator=(const Array <T>&other);
		~Array();

		T	&operator[](unsigned int index) const;
		unsigned int	size() const;
		class outOfRange: public std::exception
		{
			virtual const char *what() const throw()
			{
				return ("Index is out of range of the array");
			}
		} ;
} ;

#include "../src/array.tpp"