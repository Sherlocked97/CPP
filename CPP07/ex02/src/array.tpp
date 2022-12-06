
#include "../includes/array.hpp"


template<typename T>
Array<T>::Array()
{
	_len = 0;
	_array = new T[0];
}

template<typename T>
Array<T>::Array(unsigned int len)
{
	_len = len;
	_array = new T[_len];
	for (unsigned int i = 0; i < len; i++)
		_array[i] = 0;
}

template<typename T>
Array<T>::Array(const Array<T> &src)
{
	this->_len = src._len;
	this->_array = new T [src._len];
	for (unsigned int i = 0; i < src._len; i++)
		this->_array[i] = src._array[i];
}

template<typename T>
Array<T>	&Array<T>::operator=(const Array<T> &other)
{
	delete[] this->_array;
	this->_array = new T[other._len];
	this->_len = other._len;
	for (unsigned int i = 0; i < other._len; i++)
		this->_array[i] = other._array[i];
	return (*this);
}

template<typename T>
Array<T>::~Array()
{
	delete[] _array;
}

template<typename T>
T &Array<T>::operator[](unsigned int index) const
{
	if (index >= _len || index < 0)
		throw Array::outOfRange();
	return (this->_array[index]);
}

template <typename T>
unsigned int	Array<T>::size() const
{
	return (this->_len);
}