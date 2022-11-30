#ifndef BUREAUCAT_HPP
#define BUREAUCAT_HPP

#include <iostream>
#include <exception>
#include <string>
#include "Form.hpp"

class Form;

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
	std::string	getName(void) const;
	int		getGrade(void) const;
	void	getInfos(void) const;

	void	signForm(Form &form);

	class GradeTooHighException : public std::exception
	{
		const char	*what() const throw();	
	} ;

	class GradeTooLowException : public std::exception
	{
		const char	*what() const throw();
	} ;
} ;

std::ostream& operator << (std::ostream& out, const Bureaucat &cat);

#endif