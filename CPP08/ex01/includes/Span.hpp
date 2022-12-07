
#pragma once
#include <iostream>
#include <vector>
#include <algorithm>
#include <limits>

class Span
{
	private:
		unsigned int		_N;
		unsigned int		_stored;
		std::vector<int>	_data;
		Span();
	
	public:
		Span(const unsigned int	N);
		Span(const Span &src);
		Span	&operator=(const Span &other);
		virtual ~Span();

		void	addNumber(const int n);
		int		getSize() const;
		int		getData(int index) const;
		int		shortestSpan() const;
		int		longestSpan() const;

	template<typename T> void	fillRange(typename T::iterator begin, typename T::iterator end);

	class	alreadyFull: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Data is already full");
			}
	} ;

	class notEnoughNumbers: public std::exception
	{
		public:
			virtual const char *what() const throw()
			{
				return ("Not enough numbers");
			}
	} ;
} ;

std::ostream	&operator<<(std::ostream &out, const Span &span);

template<typename T> void Span::fillRange(typename T::iterator begin, typename T::iterator end)
{
	typename T::iterator i;

	i = begin;
	while (i != end)
	{
		addNumber(*i);
		i++;
	}
}

