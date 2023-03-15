#include "BitcoinExchange.hpp"

BCExchange::BCExchange()
{
	parseDatabase();
}

BCExchange::~BCExchange()
{
	_database.clear();
}

BCExchange::BCExchange(const BCExchange &other)
{
	*this = other;
}

BCExchange	&BCExchange::operator=(const BCExchange &other)
{
	this->_database.clear();
	this->_userRequests.clear();

	this->_database = other._database;
	this->_userRequests = other._userRequests;
	return (*this);
}

void BCExchange::parseDatabase()
{
	std::string line;
	std::string date;
	std::string value;
	std::fstream	file("files/data.csv", std::ios::in);

	if (file.is_open())
	{
		while (getline(file, line))
		{
			date.clear();
			value.clear();
			std::stringstream str(line);
			getline(str, date, ',');
			getline(str, value, ',');
			_database.insert(std::pair<std::string, std::string>(date, value));
		}
	}
}

bool	onlyDigits(std::string s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (false);
	}
	return (true);
}

void	BCExchange::getUserValue(std::string fileName)
{
	std::string line;
	std::string date;
	std::string value;
	std::fstream	file(fileName, std::ios::in);
	
	if (file.is_open())
	{
		while (getline(file, line))
		{
			int	split = line.find('|');
			if (split == std::string::npos)
				std::cout << "Error: bad input => " << line << std::endl;
			else
			{
				date = line.substr(0, split - 1);
				value = line.substr(split + 2);
				std::map<std::string, std::string>::iterator calc = _database.find(date);
				if (calc == _database.end() || !onlyDigits(value))
					std::cout << "Error: bad input => " << date << std::endl;
				else if (strtof(value.c_str(), NULL) < 0)
					std::cout << "Error: not a positive number." << std::endl;
				else if (strtof(value.c_str(), NULL) > 1000)
					std::cout << "Error: too large number." << std::endl;
				else
				{
					double result = strtof(value.c_str(), NULL) * strtof(calc->second.c_str(), NULL);
					std::cout << date << " => " << value << " = " << result << std::endl;
				}
			}
		}
	}
	else
		std::cout << "File with name: " << fileName << " wasn't found or couldn't be opened" << std::endl;
}

void	BCExchange::printDatabase()
{
	for (std::map<std::string, std::string>::iterator it = _database.begin(); it != _database.end(); it++)
		std::cout << "DATE: " << it->first << " VALUE: " << it->second << std::endl;
}