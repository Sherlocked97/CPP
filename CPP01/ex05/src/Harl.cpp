#include "../includes/Harl.hpp"

Harl::Harl()
{
	functions[0] = &Harl::debug;
	functions[1] = &Harl::info;
	functions[2] = &Harl::warning;
	functions[3] = &Harl::error;
}

Harl::~Harl()
{
}

void	Harl::debug(void)
{
	std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void	Harl::info(void)
{
	std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void	Harl::warning(void)
{
	std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void	Harl::error(void)
{
	std::cout << "[ERROR]\nThis is unacceptable! I want to speak to the manager now." << std::endl;
}

int		Harl::getLevel(std::string level)
{
	if (level.compare("DEBUG") == 0)
		return (0);
	else if (level.compare("INFO") == 0)
		return (1);
	else if (level.compare("WARNING") == 0)
		return (2);
	else if (level.compare("ERROR") == 0)
		return (3);
	else
		return (4);
}

void	Harl::complain(std::string level)
{
	int	levelNbr = getLevel(level);

	if (levelNbr == 4)
	{
		std::cout << "[INVALID]\nInvalid Level. Try again." << std::endl;
		return ;
	}
	else
		(this->*functions[levelNbr])();
}