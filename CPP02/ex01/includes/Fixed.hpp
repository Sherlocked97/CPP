#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_nbrFractBits = 8;

	public:
		Fixed();
		Fixed(const int number);
		Fixed(const float number);
		Fixed(const Fixed &fixed);
		Fixed &operator = (const Fixed &fixed);
		~Fixed();
		
		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);
} ;

std::ostream& operator << (std::ostream& out, const Fixed &other);

#endif