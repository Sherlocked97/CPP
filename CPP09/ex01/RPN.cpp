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

double	calculateResult(double result, char mode, std::vector<char>& nums)
{
	int size = nums.size();		

	switch (mode)
	{
		case '+':
		{
			for (int i = 0; i < size; i++)
			{
				result += nums[nums.size() - 1] - '0';
				nums.pop_back();
			}
		}
		break ;
		case '-':
		{
			for (int i = 0; i < size; i++)
			{
				result -= nums[nums.size() - 1] - '0';
				nums.pop_back();
			}
		}
		break ;
		case '*':
		{
			for (int i = 0; i < size; i++)
			{
				result *= nums[nums.size() - 1] - '0';
				nums.pop_back();
			}
		}
		break ;
		case '/':
		{
			for (int i = 0; i < size; i++)
			{
				result /= nums[nums.size() - 1] - '0';
				nums.pop_back();
			}
		}
		break ;
	}
	return (result);
}

void	rpn(std::string input)
{
	std::vector<char>	parts;
	std::string 		c;
	double		 		result;
	bool				first = true;

	std::stringstream str(input);
	while (getline(str, c, ' '))
	{
		if (onlyDigit(c))
		{
			parts.push_back(c.c_str()[0]);
		}
		else if (isOperator(c))
		{
			if (parts.size() == 0)
					;
			else
				result = calculateResult(result, c[0], parts);
		}
		else
		{
			std::cout << "Wrong input: " << c << "\nOnly integers from 0 - 9 are allowed!" << std::endl;
			parts.clear();
			return ;
		}
	}
	if (!parts.empty())
	{
			std::cout << "Wrong input: last argument is not an operator" << std::endl;
			parts.clear();
	}
	else
		std::cout << "Result: " << result << std::endl;
}