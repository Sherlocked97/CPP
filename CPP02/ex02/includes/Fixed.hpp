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
		Fixed(const int);
		Fixed(const float);
		Fixed(const Fixed &fixed);
		~Fixed();
		
		Fixed	&operator = (const Fixed &fixed);
		bool	operator>(const Fixed &fixed) const;
		bool	operator<(const Fixed &fixed) const;
		bool	operator>=(const Fixed &fixed) const;
		bool	operator<=(const Fixed &fixed) const;
		bool	operator==(const Fixed &fixed) const;
		bool	operator!=(const Fixed &fixed) const;

		Fixed	operator+(const Fixed &fixed) const;
		Fixed	operator-(const Fixed &fixed) const;
		Fixed	operator*(const Fixed &fixed) const;
		Fixed	operator/(const Fixed &fixed) const;

		Fixed	&operator++(void);
		Fixed	&operator--(void);
		Fixed	operator++(int);
		Fixed	operator--(int);

		float	toFloat(void) const;
		int		toInt(void) const;
		int		getRawBits(void) const;
		void	setRawBits(int const raw);

		static Fixed	&max(Fixed &fixed1, Fixed &fixed2);
		static Fixed	&min(Fixed &fixed1, Fixed &fixed2);
		static const Fixed	&max(const Fixed &fixed1, const Fixed &fixed2);
		static const Fixed	&min(const Fixed &fixed1, const Fixed &fixed2);
} ;

std::ostream& operator << (std::ostream& out, const Fixed &other);

#endif