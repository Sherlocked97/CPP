
#include "../includes/Span.hpp"

Span::Span(): _N(0), _stored(0) {}

Span::Span(const unsigned int N): _N(N), _stored(0) {}

Span::Span(const Span &src)
{
	*this = src;
}

Span	&Span::operator=(const Span &other)
{
	this->_data.clear();

	this->_N = other._N;
	this->_data = other._data;
	this->_stored = other._stored;
	return (*this);
}

Span::~Span()
{
	_data.clear();
}

void	Span::addNumber(const int n)
{
	if (_stored >= _N)
		throw Span::alreadyFull();
	_data.push_back(n);
	_stored++;
}

int	Span::longestSpan() const
{
	if (_stored < 2)
		throw Span::notEnoughNumbers();
	
	std::vector<int>::const_iterator minIt = std::min_element(_data.begin(), _data.end());
	std::vector<int>::const_iterator maxIt = std::max_element(_data.begin(), _data.end());
	
	return (*maxIt - *minIt);
}

int	Span::shortestSpan() const 
{
	if (_stored < 2)
		throw Span::notEnoughNumbers();

	std::vector<int> copy = _data;
	std::sort(copy.begin(), copy.end());
	int	min = copy[1] - copy[0];	
	for (int i = 1; i < _data.size() - 1; i++)
	{
		if (copy[i + 1] - copy[i] < min)
			min = copy[i + 1] - copy[i];
	}
	return(min);
}

int	Span::getSize() const
{
	return (static_cast<int>(this->_stored));
}

int Span::getData(int index) const
{
	return (this->_data[index]);
}

std::ostream	&operator<<(std::ostream &out, const Span &span)
{
	for (int i = 0; i < span.getSize(); i++)
		out << "DATA_NBR [" << i << "] has DATA [" << span.getData(i) << "]" <<std::endl;
	return (out);
};