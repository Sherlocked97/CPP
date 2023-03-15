#include "RPN.hpp"

bool	onlyDigit(std::string s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]) 
			|| i > 0)
			return (false);
	}
	return (true);
}

bool	isOperator(std::string s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if ((s[i] != '+'
			&& s[i] != '-' 
			&& s[i] != '*' 
			&& s[i] != '/')
			|| i > 0)
			return (false);
	}
	return (true);
}

void	calculateResult(char mode, std::vector<int>& nums)
{
	int size = nums.size();		
	int		operator1;
	int		operator2;

	if (nums.size() > 1)
	{
		operator2 = nums[nums.size() - 1];
		nums.pop_back();
		operator1 = nums[nums.size() - 1];
		nums.pop_back();
		switch (mode)
		{
			case '+':
				nums.push_back(operator1 + operator2);
			break ;
			case '-':
				nums.push_back(operator1 - operator2);
			break ;
			case '*':
				nums.push_back(operator1 * operator2);
			break ;
			case '/':
				if (operator2 == 0)
					{
						nums.clear();
						return ;
					}
				else
					nums.push_back(operator1 / operator2);
			break ;
		}
	}
	else
		return ;
}

void	rpn(std::string input)
{
	std::vector<int>	parts;
	std::string 		c;

	std::stringstream str(input);
	while (getline(str, c, ' '))
	{
		if (onlyDigit(c))
			parts.push_back(c.c_str()[0] - '0');
		else if (isOperator(c))
			calculateResult(c[0], parts);
		else
		{
			std::cout << "Wrong input: " << c << "\nOnly integers from 0 - 9 are allowed!" << std::endl;
			parts.clear();
			return ;
		}
	}
	if (parts.size() > 1)
	{
			std::cout << "Wrong input!" << std::endl;
			parts.clear();
	}
	else
		std::cout << "Result: " << parts[0] << std::endl;
}