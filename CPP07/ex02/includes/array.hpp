
#pragma once

#include <iostream>

template	<typename T_array>
class Array
{
	private:
		T_array			*_array;
		unsigned int	_len;
	
	public:
		Array();
		Array(unsigned int len)
		Array(const Array &src);
		Array &operator=(const Array &other);
		~Array();
} ;