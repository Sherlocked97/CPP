#include "../includes/Fixed.hpp"

Fixed::Fixed()
{
	_fixedPointValue = 0;
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(const int number)
{
	_fixedPointValue = number << _nbrFractBits;
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed(const float number)
{
	_fixedPointValue = (int)roundf(number * (1 << _nbrFractBits));
	// _fixedPointValue = (int) number << _nbrFractBits; (why not like this?)
	std::cout << _fixedPointValue << std::endl;
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed(const Fixed &fixed)
{
	Fixed::operator=(fixed);
	std::cout << "Copy constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &fixed)
{
	this->setRawBits(fixed.getRawBits());
	std::cout << "Copy assignment operator called" << std::endl;
	return (*this);
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}


float Fixed::toFloat(void) const
{
	return ((float) this->_fixedPointValue / (float) (1 << this->_nbrFractBits));
}

int Fixed::toInt(void) const
{
	return (this->_fixedPointValue >> this->_nbrFractBits);
}

int	Fixed::getRawBits(void) const
{
	std::cout << "getRawBits member function called" << std::endl;
	return (this->_fixedPointValue);
}

void Fixed::setRawBits(int const raw)
{
	this->_fixedPointValue = raw;
}


std::ostream& operator << (std::ostream& out, const Fixed &other)
{
	out << other.toFloat();
	return (out);
}