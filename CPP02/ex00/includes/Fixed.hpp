#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>

class Fixed
{
	private:
		int					_fixedPointValue;
		static const int	_nbrFractBits = 8;

	public:
		Fixed();
		Fixed(const Fixed &fixed);
		Fixed &operator = (const Fixed &fixed);
		~Fixed();

		int		getRawBits(void) const;
		void	setRawBits(int const raw);
} ;

#endif