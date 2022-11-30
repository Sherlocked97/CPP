#ifndef FORM_HPP
#define FORM_HPP

#include "Bureaucat.hpp"

class Bureaucat;

class Form
{
	private:
		std::string	name_;
		bool		isSigned_;
		int	const	gradeForSign_;
		int	const	gradeForExecute_;

	public:
		Form();
		Form(std::string name, const int gradeForSign, const int gradeForExecute);
		Form(Form const &src);
		~Form();

	std::string	const getName(void) const;
	int const	getGradeForSign(void) const;
	int	const	getGradeForExecute(void) const;
	bool const	getSignedStatus(void) const;

	void	sign(Bureaucat &cat);
	
	class	GradeTooHighException : public std::exception
	{
		const char	*what() const throw();
	} ;
	class	GradeTooLowException : public std::exception
	{
		const char	*what() const throw();
	} ;
} ;

std::ostream& operator << (std::ostream& out, const Form &form);

#endif