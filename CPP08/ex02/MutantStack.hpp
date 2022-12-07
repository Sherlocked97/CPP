
#pragma once

#include <stack>

template <typename T>
class MutantStack : public std::stack<T>
{
	public:
		MutantStack();
		MutantStack(const MutantStack &src);
		MutantStack	&operator=(const MutantStack &other);
		virtual ~MutantStack();

		typedef typename std::stack<T>::container_type container_type;
		typedef typename container_type::iterator iterator;
		typedef typename container_type::const_iterator const_iterator;
		typedef typename container_type::reverse_iterator reverse_iterator;
		typedef typename container_type::const_reverse_iterator const_reverse_iterator;

		iterator	begin(void) {return (this->c.begin());}
		iterator	end(void) {return (this->c.end());}

		const_iterator	begin(void) const {return (this->c.begin());}
		const_iterator	end(void) const {return (this->c.end());}

		reverse_iterator rbegin(void) {return (this->c.rbegin());}
		reverse_iterator rend(void) {return (this->c.rend());}

		const_reverse_iterator rbegin(void) const {return (this->c.rbegin());}
		const_reverse_iterator rend(void) const {return (this->c.rend());}
} ;

template<typename T>
MutantStack<T>::MutantStack()
{
}

template<typename T>
MutantStack<T>::MutantStack(const MutantStack<T> &src)
{
	*this = src;
}

template<typename T>
MutantStack<T>	&MutantStack<T>::operator=(const MutantStack &other)
{
	static_cast< std::stack<T> > (*this) = static_cast< std::stack<T> > (other);
	return (*this);
}

template<typename T>
MutantStack<T>::~MutantStack()
{
}

