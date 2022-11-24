#ifndef BUREAUCAT_HPP
#define BUREAUCAT_HPP

#include <iostream>
#include <exception>
#include <string>

class Bureaucat 
{
	private:
	std::string	name_;
	int					grade_;

	public:
		Bureaucat();
		Bureaucat(std::string, int);
		Bureaucat(Bureaucat const &src);
		~Bureaucat();

	void	increment(void);
	void	decrement(void);
	bool	gradeTooHigh(void);
	bool	gradeTooLow(void);
	std::string	getName(void) const;
	int		getGrade(void) const;
	void	getInfos(void) const;
} ;

std::ostream& operator << (std::ostream& out, const Bureaucat &cat);

#endif