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

/*                      COMPARISONS                      */
bool Fixed::operator>(const Fixed &fixed) const
{
	return (this->toFloat() > fixed.toFloat());
}

bool Fixed::operator<(const Fixed &fixed) const
{
	return (this->toFloat() < fixed.toFloat());
}

bool Fixed::operator>=(const Fixed &fixed) const
{
	return (this->toFloat() >= fixed.toFloat());
}

bool Fixed::operator<=(const Fixed &fixed) const
{
	return (this->toFloat() <= fixed.toFloat());
}

bool Fixed::operator==(const Fixed &fixed) const
{
	return (this->toFloat() == fixed.toFloat());
}

bool Fixed::operator!=(const Fixed &fixed) const
{
	return (this->toFloat() != fixed.toFloat());
}


/*                      ARITHMETIC                      */
Fixed	Fixed::operator+(const Fixed &fixed) const
{
	return (this->toFloat() + fixed.toFloat());
}

Fixed	Fixed::operator-(const Fixed &fixed) const
{
	return (this->toFloat() - fixed.toFloat());
}

Fixed	Fixed::operator*(const Fixed &fixed) const
{
	return (this->toFloat() * fixed.toFloat());
}

Fixed	Fixed::operator/(const Fixed &fixed) const
{
	return (this->toFloat() / fixed.toFloat());
}


/*                      INCREMENT/DECREMENT                      */
Fixed	&Fixed::operator++(void)
{
	++this->_fixedPointValue;
	return (*this);
}

Fixed	&Fixed::operator--(void)
{
	--this->_fixedPointValue;
	return (*this);
}

Fixed	Fixed::operator++(int)
{
	Fixed	dup(*this);

	this->_fixedPointValue++;
	return(dup);
}

Fixed	Fixed::operator--(int)
{
	Fixed	dup(*this);

	this->_fixedPointValue--;
	return(dup);
}


/*                      MIN/MAX                      */
Fixed	&Fixed::max(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

Fixed	&Fixed::min(Fixed &fixed1, Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::max(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 > fixed2)
		return (fixed1);
	return (fixed2);
}

const Fixed	&Fixed::min(const Fixed &fixed1, const Fixed &fixed2)
{
	if (fixed1 < fixed2)
		return (fixed1);
	return (fixed2);
}