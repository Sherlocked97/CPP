
#pragma once

#include <algorithm>

class nothingFound: public std::exception
{
	virtual const char *what() const throw ()
	{
		return ("Nothing found");
	}
} ;

template <class T>
int	easyfind(T &t, int n)
{
	typename T::iterator it;
	it = std::find(t.begin(), t.end(), n);
	if (it == t.end())
		throw nothingFound();
	return (std::distance(t.begin(), it));
}