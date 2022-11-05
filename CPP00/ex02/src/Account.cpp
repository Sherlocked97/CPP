
#include <iostream>
#include <ctime>
#include "../includes/Account.hpp"

Account::Account(int initial_deposit) : _amount(initial_deposit), 
	_nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = _nbAccounts;
	Account::_nbAccounts++;
	Account::_totalAmount += this->_amount;
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount ;
	std::cout << ";created" << std::endl;
}

Account::Account(void) : _amount(0), _nbDeposits(0), _nbWithdrawals(0)
{
	this->_accountIndex = Account::_nbAccounts;
	Account::_nbAccounts++;
}

void Account::displayAccountsInfos(void)
{
	_displayTimestamp();
	std::cout << "accounts:" << Account::getNbAccounts();
	std::cout << ";total:" << Account::getTotalAmount();
	std::cout << ";deposits:" << Account::getNbDeposits();
	std::cout << ";withdrawals:" << Account::getNbWithdrawals() << std::endl;
}

void Account::displayStatus(void) const
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount;
	std::cout << ";deposits:" << this->_nbDeposits;
	std::cout << ";withdrawals:" << this->_nbWithdrawals;
	std::cout << std::endl;
}

bool Account::makeWithdrawal(int withdrawl)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	if (withdrawl > this->checkAmount())
	{
		std::cout << ";withdrawal:refused" << std::endl;
		return (false);
	}
	else
	{
		std::cout << ";withdrawal:" << withdrawl;
		this->_amount -= withdrawl;
		Account::_totalAmount -= withdrawl;
		std::cout << ";amount:" << this->checkAmount();
		this->_nbWithdrawals++;
		Account::_totalNbWithdrawals++;
		std::cout << ";nb_withdrawals:" << this->_nbWithdrawals;
		std::cout << std::endl;
		return (true);
	}
}

void Account::makeDeposit(int deposit)
{
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";p_amount:" << this->checkAmount();
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit; 
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->checkAmount();
	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	std::cout << ";nb_deposits:" << this->_nbDeposits;
	std::cout << std::endl;
}

int	Account::getNbAccounts(void)
{
	return(Account::_nbAccounts);
}

int Account::getTotalAmount(void)
{
	return(Account::_totalAmount);
}

int Account::getNbDeposits(void)
{
	return(Account::_totalNbDeposits);
}

int Account::getNbWithdrawals(void)
{
	return (Account::_totalNbWithdrawals);
}

int	Account::checkAmount(void) const
{
	return (_amount);
}

void Account::_displayTimestamp(void)
{
	time_t		timer;
	struct tm 	*relevantTime;

	std::time(&timer);
	relevantTime = localtime(&timer);
	std::cout << "[" << relevantTime->tm_year + 1900 <<relevantTime->tm_mon + 1 << relevantTime->tm_mday;
	std::cout << "_";
	std::cout << relevantTime->tm_hour << relevantTime->tm_min << relevantTime->tm_sec << "] ";
}

Account::~Account(void)
{
	Account::_displayTimestamp();
	std::cout << "index:" << this->_accountIndex;
	std::cout << ";amount:" << this->_amount ;
	std::cout << ";closed" << std::endl;
	return ;
}

int Account::_nbAccounts = 0;
int Account::_totalAmount = 0;
int Account::_totalNbDeposits = 0;
int Account::_totalNbWithdrawals = 0;