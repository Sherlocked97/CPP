#ifndef HARL_HPP
#define HARL_HPP

#include <iostream>
#include <string>

class Harl
{
private:
	void	debug(void);
	void	info(void);
	void	warning(void);
	void	error(void);
	typedef void (Harl::*functionPtr)(void);
	functionPtr	functions[4];
	int		getLevel(std::string level);

public:
	Harl();
	~Harl();
	void complain(std::string level);
};
 
#endif