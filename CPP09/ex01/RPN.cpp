#include "RPN.hpp"

bool	onlyDigit(std::string s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]) 
			&& s[i] != '/' 
			&& s[i] != '*' 
			&& s[i] != '-' 
			&& s[i] != '+'
			&& i != 0)
			return (false);
	}
	return (true);
}

double	getResult(std::vector<char> parts)
{
	double	result;
	std::vector<char>::iterator it = parts.begin();

	result = *it - 48;
	std::cout << "Itterator: " << *it << " Result in calc: " << result << std::endl;
	it++;
	while (it != parts.end() - 1)
	{
		std::cout << "Itterator: " << *it << " Result in calc: " << result << std::endl;
		if (*(it + 1) == '+')
			result += (*it - 48);
		else if (*(it + 1) == '-')
			result -= (*it - 48);
		else if (*(it + 1) == '*')
			result *= (*it - 48);
		else if (*(it + 1) == '/')
			result /= (*it - 48);
		it ++;
	}
	return (result);
}

void	rpn(std::string input)
{
	std::vector<char>	parts;
	std::string 		c;

	std::stringstream str(input);
	while (getline(str, c, ' '))
	{
		if (!onlyDigit(c))
		{
			std::cout << "Wrong input: " << c << "\nOnly integers from 0 - 9 are allowed!" << std::endl;
			parts.clear();
			return ;
		}
		else
			parts.push_back(c.c_str()[0]);
	}
	double result = getResult(parts);
	std::cout << "Result: " << result << std::endl;
}