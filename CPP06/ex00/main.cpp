
#include <iostream>
#include <string>
#include <iomanip>

bool	isPseudoLiteral(std::string &string)
{
	if (string == "-inff" || string == "+inff" || string == "nanf"
		|| string == "-inf" || string == "+inf" || string == "nan")
			return (true);
	else
		return (false);
}

bool	isValid(std::string &string)
{
	char	c;

	if (isPseudoLiteral(string))
		return (true);
	if (string.length() == 1 && isalpha(string[0]))
	{
		string = std::to_string(static_cast<int>(string[0]));
		return (true);
	}
	for (int i = 0; i < (int) string.size(); i++)
	{
		c = string[i];
		if (!isdigit(c) && c != '-' && c != '+' && c != 'f' && c != '.')
			return (false);
	}
	return (true);
}

void	convertToChar(std::string &string)
{
	if (isPseudoLiteral(string))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	char	c = static_cast<char>(atoi(string.c_str()));
	if (c < 32 || c > 126)
	{
		std::cout << "Non displayable character!" << std::endl;
		return ;
	}
	std::cout << "[" << c << "]" << std::endl;
}

void	convertToInt(std::string &string)
{
	if (isPseudoLiteral(string))
	{
		std::cout << "Impossible" << std::endl;
		return ;
	}
	std::cout << std::atoi(string.c_str()) << std::endl;
}

void	convertToFloat(std::string &string)
{
	float	number = std::strtof(string.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0f" << std::endl;
		return ;
	}
	std::cout << number << "f" << std::endl;
}

void	convertToDouble(std::string &string)
{
	float	number = std::strtod(string.c_str(), nullptr);
	if (number - static_cast<int>(number) == 0)
	{
		std::cout << number << ".0" << std::endl;
		return ;
	}
	std::cout << number << std::endl;
}

void	conversion(std::string string)
{
	std::cout << std::right << std::setw(10) << "Char : ", convertToChar(string);
	std::cout << std::right << std::setw(10) << "Int : ", convertToInt(string);
	std::cout << std::right << std::setw(10) << "Float : ", convertToFloat(string);
	std::cout << std::right << std::setw(10) << "Double : ", convertToDouble(string);
}

int	main(int argc, char **argv)
{
	std::string input;

	if (argc != 2)
	{
		std::cout << "Use ./static_cast litteralValue" << std::endl;
		return (1);
	}
	input = (std::string) argv[1];
	if (isValid(input))
		conversion(input);
	else
		std::cerr << "Invalid Input-Str" << std::endl;
}