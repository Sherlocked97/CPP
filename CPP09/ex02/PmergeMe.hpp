#pragma once
#include <iostream>
#include <string>
#include <deque>
#include <list>
#include <iterator>

class PmergeMe
{
	private:
		std::list<int> _listToSort;
		std::deque<int> _dequeToSort;

		PmergeMe();
		bool	duplicateNumbers(char *s);

	public:
		PmergeMe(char **numbers);
		PmergeMe(const PmergeMe &other);
		PmergeMe &operator=(const PmergeMe &other);
		~PmergeMe();
	

		void	sort();
		void	mergeDeque(std::deque<int>::iterator begin, std::deque<int>::iterator mid, std::deque<int>::iterator end);
		void	mergeList(std::list<int>::iterator begin, std::list<int>::iterator mid, std::list<int>::iterator end);
		void	sortDeque(std::deque<int>::iterator begin, std::deque<int>::iterator end);
		void	sortList(std::list<int>::iterator begin, std::list<int>::iterator end);
		void	printDeque(std::string time);
		void	printList(std::string time);
};

class noNumberAsArg : public std::exception { char const *what() const throw() {
			return "One of the arguments isn't a number or is a negative number.";
		}};

class duplicate : public std::exception { char const *what() const throw() {
			return "Duplicate number has been found. Make sure to use every number only once.";
		}};

template <typename T>
void	print(std::string name, typename T::iterator begin, typename T::iterator end, std::string duration)
{
	int i = 0;
	std::cout << name << std::endl << "[ ";
	for (typename T::iterator it = begin; it != end; it++)
	{
		std::cout << *it << " ";
		i++;
	}
	if (duration == "")
		std::cout << "] " << std::endl;
	else
		std::cout << "] " << "(" << duration << "µs)" << std::endl;
}
