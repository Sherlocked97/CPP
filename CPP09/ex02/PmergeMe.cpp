#include "PmergeMe.hpp"

bool	onlyDigits(std::string s)
{
	for (int i = 0; s[i] != '\0'; i++)
	{
		if (!isdigit(s[i]))
			return (false);
	}
	return (true);
}

bool	PmergeMe::duplicateNumbers(char *s)
{
	for (std::deque<int>::iterator it = _dequeToSort.begin(); it != _dequeToSort.end(); it++)
	{
		if (atoi(s) == *it)
			return (true);
	}
	return (false);
}

PmergeMe::PmergeMe(char **numbers)
{
	for (int i = 1; numbers[i] != NULL; i ++)
	{
		if (!onlyDigits(numbers[i]))
			throw noNumberAsArg();
		else if (duplicateNumbers(numbers[i]))
			throw duplicate();
		else
		{
			_listToSort.push_back(atoi(numbers[i]));
			_dequeToSort.push_back(atoi(numbers[i]));
		}
	}
}

PmergeMe::~PmergeMe()
{
	_listToSort.clear();
	_dequeToSort.clear();
}

PmergeMe::PmergeMe(const PmergeMe &other)
{
	*this = other;
}

PmergeMe	&PmergeMe::operator=(const PmergeMe &other)
{
	this->_dequeToSort.clear();
	this->_listToSort.clear();

	this->_listToSort = other._listToSort;
	this->_dequeToSort = other._dequeToSort;
	return (*this);
}


std::string getTimeStr(timespec start, timespec end)
{
	double runSec = end.tv_sec - start.tv_sec;
  	double runNSec = (end.tv_nsec - start.tv_nsec);
  	double time = (runSec * 1000000L) + (runNSec / 1000);
	std::string timeStr = std::to_string(time);
	return (timeStr);
}

void	PmergeMe::sort()
{
	timespec start;
  	timespec end;

	print<std::deque<int> > ("Before: ", _dequeToSort.begin(), _dequeToSort.end(), "");
  	::clock_gettime(CLOCK_MONOTONIC_RAW, &start);
	sortDeque(_dequeToSort.begin(), _dequeToSort.end());
	::clock_gettime(CLOCK_MONOTONIC_RAW, &end);
	std::string time = getTimeStr(start, end);
	printDeque(time);
  	::clock_gettime(CLOCK_MONOTONIC_RAW, &start);
	sortList(_listToSort.begin(), _listToSort.end());
	::clock_gettime(CLOCK_MONOTONIC_RAW, &end);
	time = getTimeStr(start, end);
	printList(time);
}

void	PmergeMe::mergeDeque(std::deque<int>::iterator begin, std::deque<int>::iterator mid, std::deque<int>::iterator end)
{
	int value;
    std::deque<int>::iterator left = begin;
    std::deque<int>::iterator right = mid;

    while (left != mid && right != end) {
		if (*left < *right)
			left++;
        else
		{
			value = *right;
			std::deque<int>::iterator it = right;
			while (it != left)
			{
				*it = *(it - 1);
				--it;
			}
			*left = value;
			mid++;
			left++;
			right++;
		}
    }
}

void	PmergeMe::sortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end)
{
	std::deque<int>::iterator	mid = begin;

    int size = std::distance(begin, end);
    if (size <= 1)
        return ;
	for (int i = 0; 
		 i < size / 2; ++i)
		++mid;
	sortDeque(begin, mid);
	sortDeque(mid, end);
	mergeDeque(begin, mid, end);
	
}

void	PmergeMe::mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end)
{
	int value;
    std::list<int>::iterator left = begin;
    std::list<int>::iterator right = mid;

    while (left != mid && right != end) {
		if (*left < *right)
			left++;
        else
		{
			value = *right;
			std::list<int>::iterator it = right;
			while (it != left)
			{
				std::list<int>::iterator tmp = it;
				*it-- = *--tmp;
			}
			*left = value;
			mid++;
			left++;
			right++;
		}
    }
}

void	PmergeMe::sortList(std::list<int>::iterator begin, std::list<int>::iterator end)
{
	std::list<int>::iterator	mid = begin;

    int size = std::distance(begin, end);
    if (size <= 1)
        return ;
	for (int i = 0; 
		 i < size / 2; ++i)
		++mid;
	sortList(begin, mid);
	sortList(++mid, end);
	mergeList(begin, mid, end);
}

void	PmergeMe::printDeque(std::string time)
{
	print<std::deque<int> >("Deque:", _dequeToSort.begin(), _dequeToSort.end(), time);
}

void	PmergeMe::printList(std::string time)
{
	print<std::list<int> >("List:", _listToSort.begin(), _listToSort.end(), time);
}
