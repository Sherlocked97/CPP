#pragma once

#include <iostream>
#include <map>
#include <sstream>
#include <string>
#include <cstdlib>
#include <fstream>

class BCExchange
{
	private:
		std::map<std::string, std::string> _database;
		std::map<std::string, std::string> _userRequests;
	
	public:
		BCExchange();
		~BCExchange();

		void	parseDatabase();
		void	getUserValue(std::string);
		void	printDatabase();
};